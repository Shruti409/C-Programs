#include<iostream>
using namespace std;
int main()
{
 int principal,time,rate;
 float si;
 cout<<"Enter p,r,t"<<endl;
 cin>>principal>>rate>>time;
//  si=principal*rate*time/100; it will give result in int form
si=(principal*rate*time*1.0)/100.0;
 cout<<"Simple Interest is= "<<si;//it will give result in float 
 


    return 0;
}