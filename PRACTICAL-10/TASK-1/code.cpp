#include<iostream>
using nmaespace std;
class details{
public:   string name,ad,head;
long long tn,mn;
void print(int i)
{cout<<i<<" "<<name<<" "<<ad<<" "<<tn<<" "<<mn<<" "<<head<<endl;
 }};

int main(){
Details s[2];
for (int i=0;i<2;i++)
{cout<<"Enter the name,address,telephoneno,mobileno.,Head of the Family";
cin>>s[i].name>>s[i].ad>>s[i].mn>>s[i]>>s[i].head;}
cout<<"\n NAme \t Address \t  Telephoneno.  Mobileno\t Head of the family";
for(int i=0;i<2;i++)
s[i].print(i+1);
return 0;}

