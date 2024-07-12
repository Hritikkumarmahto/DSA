#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;

            //n-j+1 for reverse
            
        }
        cout<<endl;
    }
}