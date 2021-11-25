#include<bits/stdc++.h>
using namespace std;
string ispalindrome(string s1)
{string st=s1;
reverse(st.begin(),st.end())

if(s1=st)
if(st==s1)
return "Yes  ";
else return "No  ";}

int main()
{string c;
getline(cin,c);
cout<<ispalindrome(c);
return 0;}
