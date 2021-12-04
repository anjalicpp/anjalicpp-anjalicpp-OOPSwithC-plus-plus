#include<iostream>
using namespace std;
class count{
public:  static int a;
          count(int b){a++;}
};

int count::a=0;
int main(){
count<<s(5),t(6),u(10);
cout<<"Total number of calls for a member function :"<<cout::a<<endl;}
