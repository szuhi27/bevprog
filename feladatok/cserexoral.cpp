#include "std_lib_facilities.h"

int main()
{
 int a= 7;
 int b= 1;
 cout <<a<<" "<<b<<"\n";

 a= a^b;
 b= b^a;
 a= a^b;

 cout <<a<<" "<<b<<"\n";
}
