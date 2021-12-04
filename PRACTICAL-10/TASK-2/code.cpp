#include<iostream>
using namespace std;
class student{
string name,sec;
int rn;
public:
void setA(int i){
cout<<"Enter the Name,Section,Rollno.Student"<<i+1<<":\n";
cin>>this->name>>this->sec<<this->rn;}
void print(int i){
cout<<"\n Details of the Student "<<i<<endl;
cout<<"Name :"<<name<<endl;
cout<<"Section :"<<sec<<endl;
cout<<"Roll no: "<<rn<<endl;}
cout<<endl;
}
};
int main()
{
student s1,s2;
student *p1=&s1,*p2=&s2;
p1->setA(0);
p2->setA(1);
p1->print(1);
p2->print(2);
}



