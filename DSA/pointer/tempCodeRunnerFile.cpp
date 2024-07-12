#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3};

    cout<<arr<<endl;
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;

    int i=2;
    cout<<i[arr];


    int temp[10];
    int *p=&temp[0];

    cout<<sizeof(temp)<<endl;

    cout<<sizeof(*temp)<<endl;

    cout<<sizeof(p)<<endl;

    cout<<sizeof(p);
}