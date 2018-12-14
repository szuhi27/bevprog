#include "std_lib_facilities.h"
#include <iostream>

struct Date {
int y; // year
int m; // month in year
int d; // day of month
};

//Date today;

void init_day(Date& dd, int y, int m, int d)
{
// check that (y,m,d) is a valid date (year is always valid!!)
// if it is, use it to initialize dd
 dd.y = y;
 if (m>0 && m<13) dd.m = m;
  else std::cout<<"wrong month!\n";
 if (d>0 && d<32) dd.d = d;
  else std::cout<<"wrong day!\n";
 if (dd.m == 2 && dd.d > 28) std::cout<<"wrong day!\n";
}

void add_day(Date& dd, int n)
{
// increase dd by n days
 dd.d += n;
 if (dd.m != 2 && dd.d > 31 && dd.m != 12) {dd.d -=31; dd.m +=1;}
  else if (dd.m == 2 && dd.d > 28) {dd.d -= 28; dd.m +=1;}
  else if (dd.d > 31) {dd.d -=31; dd.m = 1; dd.y +=1;}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << '(' << d.y << ',' << d.m << ',' << d.d << ')';
}

void f()
{
 Date today;
 init_day(today, 1978, 6, 25); 
 Date tomorrow = today;
 add_day(tomorrow,1);
 std::cout<<today<<'\n'<<tomorrow<<'\n';
}

int main(){
f();}


