#include<iostream>
using namespace std;
 struct student{
string sname;
char sec;
int rn;
}s1;
class college{
string cname;
public:
college(string s){cnmae=s;}

void print(struct student s){
cout<<"Detail of student:"<<endl;
cout<<"Name:"<<s.sname<<endl;
cout<<"Roll no:"<<s.rn<<endl;
cout<<"Section:<<s.sec<<endl;
cout<<"college :"<<cname<<endl;
}};

int main()
{s1.name="Bony";
s1.sec="C";
s1.rn=1;
college c1("GEHU");
c1.print(s1);
}
