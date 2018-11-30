#include "std_lib_facilities.h"

//------------------------------------------------------------------------------

class Token {
public:
    char kind;      
    double value;    
    Token(char ch):
	kind(ch), value(0) { }    
    Token(char ch, double val):
	kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public: 
    Token_stream();   
    Token get();     
    void putback(Token t);    
private:
    bool full;       
    Token buffer;     
};

//------------------------------------------------------------------------------


Token_stream::Token_stream():full(false), buffer(0)   
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer: AN170X
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
    if (full) {       
        
        full=false;
        return buffer;
    } 

    char ch;
    cin >> ch;    

    switch (ch) {
    case '=':    // for "print"
    case 'x':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/': 
        return Token(ch);        
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        {    
            cin.putback(ch);         
            double val;
            cin >> val;              
            return Token('8',val);   
        }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts;         

//------------------------------------------------------------------------------

double expression();    

//------------------------------------------------------------------------------


double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
        {    
            double d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case '8':            // we use '8' to represent a number
        return t.value;  // return the number's value
    case 'x':
	break;
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------


double term()
{
    double left = primary();
    Token t = ts.get();        

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
	    break;
        case '/':
            {    
                double d = primary();
                if (d == 0) error("divide by zero");
                left /= d; 
                t = ts.get();
                break;
            }
        default: 
            ts.putback(t);     
            return left;
        }
    }
}

//------------------------------------------------------------------------------


double expression()
{
    double left = term();     
    Token t = ts.get();        
    while(true) {    
        switch(t.kind) {
        case '+':
            left += term();    
            t = ts.get();
            break;
        case '-':
            left -= term();    
            t = ts.get();
            break;
        default: 
            ts.putback(t);     
            return left;       
        }
    }
}

//------------------------------------------------------------------------------

int main()
try
{
    cout <<"Welcome to our simple calculator.\n"<<"Please enter expression using floating-point numbers.\n";
    cout <<"Available operators:(+,-,*,/)\n"<<"To print use: '='.\n"<<"To exit use: 'x'.\n";

    double val =0;

    while (cin) {
        Token t = ts.get();

        if (t.kind == 'x') 
	    break; // 'q' for quit
        if (t.kind == '=')        // ';' for "print now"
            cout << "" << val << '\n';
        else
            ts.putback(t);
        val = expression();
    }
	keep_window_open();
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n'; 
	keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n"; 
	keep_window_open();
    return 2;
}

//------------------------------------------------------------------------------
