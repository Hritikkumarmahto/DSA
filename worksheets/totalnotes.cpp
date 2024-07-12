#include<iostream>
using namespace std;\
int main()
{
    int  num;
    cout<<"enter the number you want the total  notes  :-";
    cin>>num;
    int a=num/100;
    int b,c,d;

    switch(a,b,c,d)
    {
    case 'a':cout<<a;
        break;
    case 'b':cout<<a/50;
        break;
    case 'c':cout<<b/10;
        break;
    default :cout<<"number not present to divide";
    }

}