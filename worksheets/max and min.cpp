#include<iostream>
using namespace std;
int findmax(int arr[],int size)
{
    int find_min=INT_MAX;
    for(int i=0;i<size;i++)
    {
    if(arr[i]>=find_min)
    {
        find_min=arr[i];
    }
}
return find_min;
}
int findmin(int arr[],int size)
{
    int Fine_max=INT_MIN;
    for(int i=0;i<size;i++)
    {
    if(arr[i]>=Fine_max)
    {
        Fine_max=arr[i];
    }
}
return Fine_max;
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"max value is"<< findmax(arr,n)<<endl;
    cout<<"min value is"<<findmin(arr,n) <<endl;
}
