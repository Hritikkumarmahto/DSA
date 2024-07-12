#include<iostream>
using namespace std;
bool is_prime(int n){
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
 int n;
 cin>>n;

 is_prime(n);
 cout<<"the given number is prim "<<endl;
 
}