TASK-4.a
#include<iostream>
#include<cmath>
using namespace std;
class number{
public:  int n;number(int m){
this->n=m;}
friend int operator < (Number &,Number &);
};

int operator < (Number &c1,Number &c2)
{return pow(c1.n,c2.n);
}
int main()
{cout<<"Operator Overloading :"<<endl;
cout<<"Converting '<' into power function;"<<endl<<endl;
Number n1(2),n2(5);
Number n3=n2<n1;
cout<<n1.n<<"to the power"<<n2.n<<"is:"<<n3.n<<endl;
Number n4=n2<n1;
cout<<n2.n<<"to the power"<<n1.n<<"is:"<<n4.n<<endl;}


TASK-4.b

#include<iostream>
#include<cmath>
using namespace std;
class number{
public:  int n;number(int m){
this->n=m;}
};
int operator + (Number &c1,Number &c2){
return c1.n+c2.n;
}

int main()
{
cout<<"Operator Overloading:"<<endl;
cout<<"Marking '+'operator valid for objects"<<endl;
Number n1(19),n2(25);
Number n3=n1+n2;
cout<<"Addition of"<<n1.n<<"and"<<n2.n<<"is:"<<n3.n<<endl;}
