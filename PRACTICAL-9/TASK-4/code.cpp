#include<iostream>
using namespace std;
class student {student name;
int age;
int marks ;

public:
student(string s,int a,int m)
[names=s;
age=a;
marks=m;
}
friend int Add(student m);};

int sum=0;
int add(student m){
sum=sum+m.marks;};

int main()
{student s("Albert",18,35),t("Bony",19,20),u("Cia",21,19);
Add(s);
Add(t);
Add(u);
cout<<"Total sum of marks of 3 students is:"<<sum<<endl;}
