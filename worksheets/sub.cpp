#include <iostream>
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{
    bool subset[n + 1][sum + 1];
    for (int i = 0; i <= n; i++)
        subset[i][0] = true;
    for (int i = 1; i <= sum; i++)
        subset[0][i] = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
        }
    }
    return subset[n][sum];
}

int main()
{
    int k, sum;
    cout << "Enter the number of elements: ";
    cin >> k;

    int set[k];

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < k; i++)
    {
        cin >> set[i];
    }

    cout << "Enter the target sum: ";
    cin >> sum;

    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        cout << "Found a subset with the given sum" << endl;
    else
        cout << "No subset with the given sum" << endl;

    return 0;
}
