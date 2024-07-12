#include<iostream>
using namespace std;
int main()
{
    int i=9;
    int &j=i; // reference variable

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    
}