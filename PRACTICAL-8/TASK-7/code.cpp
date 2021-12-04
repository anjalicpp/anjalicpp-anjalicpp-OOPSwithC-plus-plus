v1
#include<iostream>
 using namespace std;
void swap(int a,int b)
{int t=a;
a=b;b=t;
cout<<"Value after swapping:"<<a<<"  "<<b;
}

int main(){
int a=10,b=20;
cout<<"Value before swap:"<<a<<" "<<b;
swap(a,b);
return 0;}

v2
#include<iostream>
 using namespace std;
void swap(int &a,int &b)
{int t=a;
a=b;b=t;
cout<<"Value after swapping:"<<a<<"  "<<b;
}

int main(){
int a=10,b=20;
cout<<"Value before swap:"<<a<<" "<<b;
swap(a,b);
return 0;}
v3
#include<iostream>
 using namespace std;
void swap(int *a,int *b)
{*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}

int main(){
int a=10,b=20;
cout<<"Value before swap:"<<a<<" "<<b;
swap(&a,&b);
cout<<"Value after swapping:"<<a<<"  "<<b;
return 0;}
