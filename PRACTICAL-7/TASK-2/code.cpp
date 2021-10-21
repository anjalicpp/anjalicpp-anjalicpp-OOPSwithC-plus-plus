#include<bits/c++.h>
#include<ctime>
#include<cmath>

using namespace std;
int main()
{
time_t t = time  += time(NULL);
tm* tPtr = localtime(&t);
int ch;
cin>>ch;
switch(ch){
case 1:cout<<"Year="<<(tptr->tm_year)+1900;cout<<endl;break;
case 2:cout<<"Month="<<(tptr->tm_mon)+1;cout<<endl;break;
case 3:cout<<"Date="<<(tptr->tm_mday)<<"/"<<(tptr->tm_year)+1990<<endl;break;
case 4:cout<<"Time=<<"(tptr->tm_hour)<<":"<<(tptr->tm_min)<<":"<<(tptr->tm_sec)<<endl;break;
default:cout<<"Invalid choice"<<endl;break;}
return 0;}
