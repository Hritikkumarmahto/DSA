#include <iostream>
using namespace std;

int findright(int arr[], int n, int key)

{
    int ans = -1;
    int start = arr[0];
    int end = arr[n - 1];
    int mid = start + (end - start) / 2;
    // for(int i=0;i<=n;i++)
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end=mid-1;
        }

        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main()
{
    int n, key;
    cout<<"enter the size of array:-";

    cin >> n;
    int arr[n];
    cout<<"enter the number in the array:-";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the value you want to find:-";
    cin >> key;
    int result = findright(arr, n, key);

    if (result != -1)
    {
        cout << "the value is present at index:_" << result;
    }
    else
    {
        cout << "your Value is Not present";
    }
}