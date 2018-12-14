#include "std_lib_facilities.h"

enum class Month {
jan=0, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

vector<string> month_tbl= { "jan", "feb", "marc", "aprl",
                             "may", "june", "july", "aug", "sept",
                             "oct", "nov", "dec" };

ostream& operator<<(ostream& os, Month m)
{
    return os << month_tbl[int(m)];
}

class Date {

int y; // year
Month m;
int d; // day
 

public:
 Date(int y, Month m, int d); // check for valid date and initialize
 void add_day(int n);
 int year() const { return y; }
 Month month() const { return m; }
 int day() const { return d; }
};
 
Date::Date(int yy, Month mm, int dd)
     :y{yy}, m{mm}, d{dd}
{
 //if (m < 1 || 12 < m) std::cout<<"wrong month!\n";
 if (d < 1 || 31 < d) std::cout<<"wrong day!\n";
 //if (m == 2 && d > 28) std::cout<<"wrong day!\n";
}

void Date::add_day(int n){
 d += n;
 if (/*Month m==feb != 2 &&*/ d > 31/* && m != 12*/) {d -=31; /*m ++1;*/}
  /*else if (m == 2 && d > 28) {d -= 28; m +=1;}
  else if (d > 31) {d -=31; m = 1; y +=1;}*/
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
}

/*private:
int y; // year
Month m;
int d; // day
};*/

void f()
{
 //Month m= Month::jun;
 Date today(1978, Month::jun, 25); 
 Date tomorrow = today;
 tomorrow.add_day(1);
 std::cout<<today<<'\n'<<tomorrow<<'\n';
}

int main(){
f();}
