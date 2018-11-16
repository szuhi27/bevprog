#include "std_lib_facilities.h"

int main()
{
 try 
  { 
 /*1.*/ cout << "Success!\n"; //C -> c
 /*2.*/ cout << "Success!\n"; //\n; -> \n";
 /*3.*/ cout << "Success" << "!\n" //<< !\n" -> <<"!\n"
 /*4.*/ cout << "success" << '\n'; //<< success << -> << "success" <<
 /*5.*/ int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; // stirng res -> int res
 /*6.*/ vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n"; //(v5) = 7; if (v(5)!=7) -> v[5] = 7; if (v[5]==7)
 /*7.*/ if (true) cout << "Success!\n"; else cout << "Fail!\n"; //if (cond) cout -> if (true) cout 
 /*8.*/ bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n"; //bool c = false; -> bool c = true;
 /*9.*/ string s = "ape"; string c = "fool"; if (true) cout << "Success!\n"; //boo c = "fool"<s; -> string c = "fool"; + if (c)-> if (true)
 /*10.*/ string s = "ape"; if (s!="fool") cout << "Success!\n"; //if (s=="fool") -> if (s!="fool")
 /*11.*/ string s = "ape"; if (s=="ape") cout << "Success!\n"; //if (s=="fool") cout < "Success!\n"; ->  if (s=="ape") cout << "Success!\n";
 /*12.*/ string s = "ape"; if (s!="fool") cout << "Success!\n"; //if (s+"fool") cout < "Success!\n"; -> if (s!="fool") cout << "Success!\n";
 /*13.*/ vector<char> v(5); for (int i=0; i<v.size(); ++i) cout << "Success!\n"; //0<v.size(); -> i<v.size();
 /*14.*/ vector<char> v(5); for (int i=0; i<v.size(); ++i) cout << "Success!\n"; //i<=v.size(); -> i<v.size();
 /*15.*/ string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s; //cout << s[i] -> cout << s;
 /*16.*/ if (true) cout << "Success!\n"; else cout << "Fail!\n"; //if (true) then cout -> if (true) cout
 /*17.*/ int x = 2000; char c = x; if (x== 2000) cout << "Success!\n"; //if (c==2000) -> if (x== 2000)
 /*18.*/ string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s; //cout << s[i]; -> cout << s;
 /*19.*/ vector<int> v(5); for (int i=0; i<=v.size(); ++i) cout << "Success!\n"; //vector v(5); -> vector<int> v(5);
 /*20.*/ int i=0; int j = 9; while (i<10) ++i; if (j<=i) cout << "Success!\n"; //while (i<10) ++j; if (j<i) -> while (i<10) ++i; if (j<=i)
 /*21.*/ int x = 2; double d = 5/(x–1); if (d==2*x+1) cout << "Success!\n"; //d = 5/(x–2); if (d==2*x+0.5) -> d = 5/(x–1); if (d==2*x+1)
 /*22.*/ string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; //
 /*23.*/ int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; //
 /*24.*/ int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n"; //
 /*25.*/ cout << "Success!\n"; //cin -> cout
   keep_window_open();
   return 0;
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
}
