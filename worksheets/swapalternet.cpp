#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}

void swapalter(int arr[],int n)
{
    for(int i=0;i<=n;i+=2)
    {
        if(arr[i]<n);
        swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    
    swapalter(arr,n);
    print(arr,n);

}