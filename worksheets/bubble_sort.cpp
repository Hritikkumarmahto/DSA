#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i-1; j++){
        if(arr[j]>arr[j+1])
        {
            swap(arr[j], arr[j + 1]);
        }
        }
    }
}
int main()
{
    int n;
    cout << "enter the size of the array  :_";
    cin >> n;
    int arr[n];
    cout << "entet the umber of elemt=nts in the array:-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr,n);

    cout<<"sorted array :-";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

    
}