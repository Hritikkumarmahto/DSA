#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    int rem=0;
    int temp=n;

    for(;temp>0;temp=temp/10)
    {
        rem=rem*10+temp%10;

    }
    if(rem==n)
    {
        cout<<"a palindrom number";

    }
    else
    {
        cout<<"not ";
    }
}