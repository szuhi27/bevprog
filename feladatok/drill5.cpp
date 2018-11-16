#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
 try 
  { 
 /*1.*/ cout << "Success!\n"; //C -> c
 /*2.*/ cout << "Success!\n"; //\n; -> \n";
 /*3.*/ cout << "Success" << "!\n"; //<< !\n" -> <<"!\n"
 /*4.*/ cout << "success" << '\n'; //<< success << -> << "success" <<
 /*5.*/ int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n"; // stirng res -> int res
 /*6.*/ vector<int> v2(10); v2[5] = 7; if (v2[5]==7) cout << "Success!\n"; //(v5) = 7; if (v(5)!=7) -> v[5] = 7; if (v[5]==7)
 /*7.*/ if (true) cout << "Success!\n"; else cout << "Fail!\n"; //if (cond) cout -> if (true) cout 
 /*8.*/ bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n"; //bool c = false; -> bool c = true;
 /*9.*/ string s = "ape"; string c5 = "fool"; if (true) cout << "Success!\n"; //boo c = "fool"<s; -> string c = "fool"; + if (c)-> if (true)
 /*10.*/ string s1 = "ape"; if (s1!="fool") cout << "Success!\n"; //if (s=="fool") -> if (s!="fool")
 /*11.*/ string s2 = "ape"; if (s2=="ape") cout << "Success!\n"; //if (s=="fool") cout < "Success!\n"; ->  if (s=="ape") cout << "Success!\n";
 /*12.*/ string s3 = "ape"; if (s3!="fool") cout << "Success!\n"; //if (s+"fool") cout < "Success!\n"; -> if (s!="fool") cout << "Success!\n";
 /*13.*/ vector<char> v3(5); for (int i=0; i<v3.size(); ++i) cout << "Success!\n"; //0<v.size(); -> i<v.size();
 /*14.*/ vector<char> v4(5); for (int i=0; i<v4.size(); ++i) cout << "Success!\n"; //i<=v.size(); -> i<v.size();
 /*15.*/ string s4 = "Success!\n"; for (int i=0; i<6; ++i) cout << s4; //cout << s[i] -> cout << s;
 /*16.*/ if (true) cout << "Success!\n"; else cout << "Fail!\n"; //if (true) then cout -> if (true) cout
 /*17.*/ int x = 2000; char c1 = x; if (x== 2000) cout << "Success!\n"; //if (c==2000) -> if (x== 2000)
 /*18.*/ string s5 = "Success!\n"; for (int i=0; i<10; ++i) cout << s5; //cout << s[i]; -> cout << s;
 /*19.*/ vector<int> v5(5); for (int i=0; i<=v5.size(); ++i) cout << "Success!\n"; //vector v(5); -> vector<int> v(5);
 /*20.*/ int i=0; int j = 9; while (i<10) ++i; if (j<=i) cout << "Success!\n"; //while (i<10) ++j; if (j<i) -> while (i<10) ++i; if (j<=i)
 /*21.*/ int x1 = 2; double d = 5/(x1-1); if (d==2*x1+1) cout << "Success!\n"; //d = 5/(x–2); if (d==2*x+0.5) -> d = 5/(x–1); if (d==2*x+1)
 /*22.*/ string s6 = "Success!\n"; for (int i=0; i<=10; ++i) cout << s6; //string<char> s -> string s + cout << s[i] -> cout << s
 /*23.*/ int i4=0; int j4=0; while (i4<10) ++i4; if (j4<i4) cout << "Success!\n"; //++: int j=0; + (i<10) ++j -> (i<10) ++i
 /*24.*/ int x2 = 4; double d1 = 5/(x2-2); if (d1=2*x2-0.5) cout << "Success!\n"; //if (d=2*x+0.5) -> if (d== (x/2+0.5))
 /*25.*/ cout << "Success!\n"; //cin -> cout
   return 0;
  }
 catch (exception& e) {
  cerr << "error: " << e.what() << '\n';
  return 1;
  }
 catch (...) {
  cerr << "Oops: unknown exception!\n";
  return 2;
  }
}
