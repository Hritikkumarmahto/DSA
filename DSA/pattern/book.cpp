#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> total;
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 5; ++i)
    {
        total.push_back(arr[i]);
    }

    for (int i = 0; i < 10; ++i)
    {
        total.push_back(brr[i]);
    }

    for (int i = 0; i < total.size(); ++i)
    {
        cout << total[i] << " ";
    }
    for (int i = 0; i < 5; i++)
    {
        cout << total[i]<<" ";
    }
//make the 1st erray empty

    return 0;
}
