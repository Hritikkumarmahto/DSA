#include <bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int dis = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                dis = 1;
            }
        }
        if (dis == 0)
        {
            break;
        }
        cout << "not runs";
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "ente the size ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Bubble_Sort(arr, n);
    print(arr, n);
}