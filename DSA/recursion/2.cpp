#include<iostream>
using namespace std;
int printtu(int n)
{
    if(n==0)
    {
        return 1 ;
    }
   cout<<n<<endl;
    printtu(n-1);
}


int main()
{
    int n;
    cin>>n;

    printtu(n);
    return 0;
}