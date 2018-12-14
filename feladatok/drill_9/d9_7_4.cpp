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
public:
Date(int y, Month m, int d);
int day() const{ return d; }
Month month() const{ return m; } 
int year() const{ return y; } 
void add_day(int n);
void add_month(int n);
void add_year(int n);

private:
int y; // year
Month m;
int d; // day of month
};

Date::Date(int yy, Month mm, int dd)
     :y{yy}, m{mm}, d{dd}
{
 if (d < 1 || 31 < d) std::cout<<"wrong day!\n";
}
void Date::add_day(int n){
 d += n;
 if (d > 31) d -=31;
}
void Date::add_year(int n){
 y += n;
}
void Date::add_month(int n){
 
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
}

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

