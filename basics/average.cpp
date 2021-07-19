#include<iostream>
using namespace std;
int main(){

    int total_numbers;
    cin>>total_numbers;
    int sum=0;
    int i=0;int num;
    while(i<total_numbers)
    {
        cin>>num;
        sum=sum+num;
        i++;

    }
    cout<<sum*1.0/total_numbers;
    return 0;
}