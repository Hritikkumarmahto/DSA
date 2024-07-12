#include<iostream>
using namespace std;
int main()
{
    int num=5;

    int *ptr= &num;

    cout<<"address is "<<ptr<<endl;

    cout<<"the value is "<<*ptr;

    double d=1.3;

    double *p2= &d;

    cout<<"address is"<<p2<<endl;

    cout<<"value is "<<*p2;

    cout<<"size of pt5rr"<<sizeof(ptr)<<endl;



    //int *pointer;  // pointer  will created but the garbage value will be stored int the pointer 

    int i=5;
    // int *pointer=&i;
    // (*pointer++);

    // cout<<*pointer;

    int *t=&i;

    cout<<(*t)++<<endl;

}