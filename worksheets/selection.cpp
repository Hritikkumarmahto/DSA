#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
     for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        if(arr[j]<arr[min])
        {
            min=j;
        }
        swap(arr[min],arr[i]);

        }

}

    
int main()
{
    int n;
    cout<<"enter the size of array  :- ";
    cin>>n;
    int arr[n];
    cout<<"enter the number of elements in the array  :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   selection_sort(arr,n);

   cout<<"shorted array  :-";
   for(int i=0;i<n;i++)
   {
    cout<<arr[i]<<" ";
   }


    return 0;
}