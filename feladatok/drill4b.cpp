#include "std_lib_facilities.h"

int main()
{
 double f =0, r= 0, kicsi = 0, sum = 0, nagy = 0;
 string megys= "empty";
 char c = 'c';
 vector<double>s;
 int hiba =0;
 
 while(c == 'c')
  {cout <<"\nEnter a length(ex.: '12 m' [can use: m,cm,inch,ft])"<<"\n";
   cin >>f>>megys;
   
   if (f == 0)
    {cout <<"Error!\n";
     hiba = 1;}
   else if (megys == "cm")
    {r = (0.01 * f);
     s.push_back(r);}
   else if (megys == "inch")
    {r = (0.0254 * f);
     s.push_back(r);}
   else if (megys == "ft")
    {r = (0.3048 * f);
     s.push_back(r);}
   else if (megys == "m")
    {r= (1 * f);
     s.push_back(r);}
   else
    {cout <<"Error!\n";
     hiba =1;}

   if (((r < kicsi) || (kicsi == 0)) && (hiba == 0))
    {kicsi = r;
     cout <<"The value is the smallest so far: "<<kicsi<<" m.\n";}
   else if (((r > nagy) || (nagy == 0)) && (hiba == 0))
    {nagy = r;
     cout <<"The value is the largest so far: "<<nagy<<" m.\n";}
   else if (hiba != 1)
    cout <<"The value in meters: "<<r<<" m.\n";
   
   sum += r;
   cout <<"Continue? (yes=c/no=|)\n";
   cin >>c;}
 
 sort(s);
 cout <<"\nThe smallest value is "<<kicsi<<" m.\n"<<"The largest value is "<<nagy<<" m.\n";
 cout <<"There were "<<s.size()<<" value(s) entered.\n"<<"The total length entered is "<<sum<<" m.\n";
 cout <<"The values entered (in increasing order, in meters):\n";
 for (int i=0; i<s.size(); ++i)
  cout <<s[i]<<"m, ";
 cout <<"\n";
 }

