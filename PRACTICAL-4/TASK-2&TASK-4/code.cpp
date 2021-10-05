#include<iostream>
using namespace std;
namespace first
{ int add(int a,int b)
{return a+b;}
}
namespace second{
float add(float a,float b)
{return a+b;}
}

int main()
{ inta; 
first(5,2);
float b=second::(5,2.2);
cout<<"Sum of entered number is:"<<a<<" "<<b<<endl;
return 0;}
