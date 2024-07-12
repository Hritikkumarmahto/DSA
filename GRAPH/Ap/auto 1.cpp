#include <iostream>

using namespace std;

int countLessThanK(int arr[], int element_size, int K)
{
    int count = 0;
    for (int i = 0; i < element_size; i++)
    {
        if (arr[i] < K)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int element_size;
    cin >> element_size;

    int arr[element_size];
    for (int i = 0; i < element_size; i++)
    {
        cin >> arr[i];
    }

    int K;
    cin >> K;

    int lessThanKCount = countLessThanK(arr, element_size, K);
    cout << lessThanKCount << endl;

    return 0;
}
