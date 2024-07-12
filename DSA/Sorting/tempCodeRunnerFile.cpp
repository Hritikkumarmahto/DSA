#include<iostream>
using namespace std;
void selecti_onsort(int arr[],int n)
{
    int mid;
    for(int i=0;i<n-1;i++)
    {
        mid=i;
        for(int j=i+1;j<n-1;j++)
        {
            
            if(arr[mid]>arr[j])
            {
                arr[mid]=arr[j];
            }

        }
        if(mid!=i)
        {
            swap(arr[mid],arr[i]);
        }
    }
}
void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main()
{
    int n;
    cout<<"enter the size of the array:-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selecti_onsort(arr,n);
    cout<<"sorted array";
    printarr(arr,n);
    return 0;
}