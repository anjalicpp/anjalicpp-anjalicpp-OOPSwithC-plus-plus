3.a}
#include<iostream>
 using namespace std;

int main(){
int arr[]={10,20,30};
cout<<*arr<<endl;
arr++;
cout<<*arr<<endl;
return 0;}

3.b}
#include<iostream>
 using namespace std;

int main(){
int arr[]={10,20,30};
cout<<*arr<<endl;
cout<<*(arr+1)<<endl;
return 0;}
