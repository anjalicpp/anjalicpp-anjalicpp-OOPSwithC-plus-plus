#include<iostream>
#include<iomanip>
using namespace std;
int main()
{int n=1234;
cout<<endl;
cout<<"Setting minimum field width:"<<setw(5)<<n<<endl;
cout<<"Filling with string :"<<setw(15)<<setfill('*')<<n<<endl;}
