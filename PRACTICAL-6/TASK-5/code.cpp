#include<bits/stdc++.h>
using namespace std;
int main()
{
string st1,st2;
cin>>st1;
cin>>st2;
int x=st1.compare(st2);
if(x>0)cout<<"st1 is larger than st2";
else if(x<0)
cout<<"st2 is larger than st1";
else cout<<"s1 and s2 are equal";
return 0;}
