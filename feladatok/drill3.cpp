#include "std_lib_facilities.h"

int main()
{
 cout <<"Letter Creator 2k18!\n";
 cout <<"Enter the name of the person you want to write to: \n";
  string first_name;
  cin >> first_name;
  cout <<"Dear "<<first_name<<"!\n";
  cout <<"  How are you? We've met long time ago. It would be nice to meet you again!\n";
 cout <<"Enter name of an other friend: \n"; 
  string friend_name;
  cin >> friend_name;
  cout <<"  Have you seen "<<friend_name<<" lately?\n"; 
 char friend_sex = 0;
  cout <<"Enter the sex of the friend m(if male) or f(if female)!\n";
  cin >> friend_sex;
  if (friend_sex == 'm')
    cout <<"If you see "<<friend_name<<" please ask him to call me!\n";
  if (friend_sex == 'f')
    cout <<"If you see "<<friend_name<<" please ask her to call me!\n";
 int j=0;
 int age = -1;
 while (j!=1)
  {
   cout <<"Tell the age of "<<first_name<<" :\n";
   cin >> age;
   if ((age <= 0) || (age >= 110))
     cout <<"You're kiddin bruv!\n";
   else
    j=1;
  }
 cout <<"I hear you just had a birthday and you are "<<age<<" years old.\n";
 if (age < 12)
  cout <<"Next year you will be "<<(age+1)<<"\n";
 else if (age == 17)
  cout <<"Next year you will be able to vote!\n";
 else if (age > 70)
  cout <<"I hope you are enjoying retirement.\n";
 cout <<"Your name: \n";
  string yourname;
  cin >>yourname;
 
 cout <<"\n\nYour letter: \n\n";
  cout <<"Dear "<<first_name<<"!\n";
  cout <<"  How are you? We've met long time ago. It would be nice to meet you again!\n";
  cout <<"  Have you seen "<<friend_name<<" lately?\n";
  if (friend_sex == 'm')
    cout <<"  If you see "<<friend_name<<" please ask him to call me!\n";
  else if (friend_sex == 'f')
    cout <<"  If you see "<<friend_name<<" please ask her to call me!\n";
  cout <<"  I hear you just had a birthday and you are "<<age<<" years old.\n";
   if (age < 12)
    cout <<"  Next year you will be "<<(age+1)<<".\n";
   else if (age == 17)
    cout <<"  Next year you will be able to vote!\n";
   else if (age > 70)
    cout <<"  I hope you are enjoying retirement.\n";
  cout <<"Yours sincerely,__________! "<<yourname<<"\n";
}

