#include<iostream>
using namespace std;
int main(){
    int a;//declaring a variable
    a=10;//assignment
    //int a=10; (initilization)
    cout<<a;//print 10
    cout<<endl;
    int b=12.4;//print 12
    cout<<b<<"\n";
    float f=12.4;//print 12.4
    cout<<f<<endl;
    float f1=15;
    cout<<f1<<endl;//print 15
char ch='c';
cout<<ch<<endl;//print c
//char cg='97';
//cout<<cg<<endl;// it will read last occuring number(7 in this case)
char cc=97;
cout<<cc<<endl;//print a
bool x=true;//it will print 1
cout<<x;
bool bb=0;
cout<<bb<<endl;//it will print 0 
int xx='a';
cout<<xx<<endl;//it will print 97 ascii value of a
double dd=44;

cout<<dd<<endl;//it will print 44
double dp=89.7777777876543456;//print upto  4 decimal point 
float ff=12.45678999;
cout<<ff<<endl;

cout<<dp<<endl;
// finding sizeof each data type


cout<<sizeof(a)<<endl;//size of int is 4 bytes
cout<<sizeof(f)<<endl;//size of float is 4 bytes
cout<<sizeof(ch)<<endl;//size of char is 1 byte
cout<<sizeof(bb)<<endl;//size of boolean is 1 byte
cout<<sizeof(dp)<<endl;//size of double is 8 byte
long u=99999;//size of long is 8 byte
cout<<u<<endl;
cout<<sizeof(u)<<endl;
short sp=12;
cout<<sizeof(sp)<<endl;//size of short is 2 bytes
//type modifiers
//short and long are also type modifiers
unsigned int q=-78;//print garbage vale
cout<<q<<endl;
signed int p=-98;//print -98
cout<<p<<endl;
int t;
cout<<t<<endl;//if value is not initilize it will print garbage value
int z;
a=z+a;
cout<<z<<endl;//undefiend behaviour
int a1,b2,c3;//multiple declaration
int a22=4,b33=88;//multiple declaration and initilization
char chara;
cout<<chara<<endl;//garbage value but a character
float floo;
cout<<floo<<endl;//garbage value but float
bool boolean ;//garbage value
cout<<boolean<<endl;


return 0;
}