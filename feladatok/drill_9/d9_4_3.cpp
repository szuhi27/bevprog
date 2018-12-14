#include "std_lib_facilities.h"

class Date {
 int y, m, d; // year, month, day
 public:
  Date(int y, int m, int d); // check for valid date and initialize
  void add_day(int n); // increase the Date by n days
  int month() const { return m; }
  int day() const { return d; }
  int year() const { return y; }
};

Date::Date(int yy, int mm, int dd)
     :y{yy}, m{mm}, d{dd}
{
 if (m < 1 || 12 < m) std::cout<<"wrong month!\n";
 if (d < 1 || 31 < d) std::cout<<"wrong day!\n";
 if (m == 2 && d > 28) std::cout<<"wrong day!\n";
}

void Date::add_day(int n){
 d += n;
 if (m != 2 && d > 31 && m != 12) {d -=31; m +=1;}
  else if (m == 2 && d > 28) {d -= 28; m +=1;}
  else if (d > 31) {d -=31; m = 1; y +=1;}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')';
}

void f()
{
 Date today(1978, 6, 25); 
 Date tomorrow = today;
 tomorrow.add_day(1);
 std::cout<<today<<'\n'<<tomorrow<<'\n';
}

int main(){
f();}
