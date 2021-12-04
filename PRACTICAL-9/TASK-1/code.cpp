TASK-1.a
#include<iostream>
#include<string.h>
using namespace std;
class student{
string name,address;
int rollno;
long long phone;
public:
  void assign(string n,int r,long long ph,string ad)
{name=n;
rollno=r;
phone=ph;
address=ad;}
void print()
{cout<<name<<"  "<<rollno<<"  "<<phone<<"  "<<address<<"  "<<endl;} };

int main()
{
student t,s;
t.assign(Sam,1,7986456676,"Dehradun");
s.assign(John,2,8947575485,"Shimla");
cout<<"Name\tRollno\tPhoneno\tAddress"<<endl;
t.print();
s.print();
return 0;}


TASK-1.b

#include<iostream>
#include<string.h>
using namespace std;

class student{
public:    char name[10],section;
int age,year,marks;
void assign(char*c,int m,char s)
{strcpy(name,c);
marks=m;
section=s;}
int get(){return marks;}
};

int main(){
char c[10],t;
int m;
student s[5];
for(int i=0;i<5;i++)
{cout<<"Enter the Name,Marks,Section of student:"<<endl;
cin>>c>>m>>t;
s[i].assign(c,m,t);}
for(int i=0;i<s;i++)
{cout<<"Marks of student-"<<i+1<<":"<<s[i].get()<<endl;}
return 0;}
