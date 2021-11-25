#include<iostream>

using namespace std;

int main()
{int num,flag,i;
cout<<"Entre the number:"
cin>>num;
for(i=2;i<num;i++)
if(num%i==0)
{flag=1;break;}
if(flag) cout<<"not prime";
cout<<"prime";
return 0;
}

