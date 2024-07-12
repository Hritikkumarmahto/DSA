#include<iostream>
using namespace std;
int fibonaciii(int n)
{
    if(n==0)
      return 0;
    if(n==1)
        return 1;
    int ans=fibonaciii(n-1)+fibonaciii(n-2); 
}
int main()
{
    int n;
    cin>>n;
    
    cout<<fibonaciii(n);
}