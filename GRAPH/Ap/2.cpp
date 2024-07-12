#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> maxOfSubarrays(int arr[], int n, int k)
{
    vector<int> result;
    deque<int> dq;

    for (int i = 0; i < k; ++i)
    {
        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (int i = k; i < n; ++i)
    {
        result.push_back(arr[dq.front()]);

        while (!dq.empty() && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    result.push_back(arr[dq.front()]);
    return result;
}

int main()
{
    int arr1[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 3;
    vector<int> result1 = maxOfSubarrays(arr1, n1, k1);
    cout << "Maximums of all contiguous subarrays of size " << k1 << " are: ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << endl;

    int arr2[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 4;
    vector<int> result2 = maxOfSubarrays(arr2, n2, k2);
    cout << "Maximums of all contiguous subarrays of size " << k2 << " are: ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
