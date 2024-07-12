#include <iostream>
#include <vector>

using namespace std;

int countElementsLessThanOrEqualTo(vector<int> &A, int X)
{
    int left = 0;
    int right = A.size() - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (A[mid] <= X)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return (result != -1) ? result + 1 : 0;
}

int main()
{ // Example 1
    vector<int> A1 = {1, 2, 4, 5, 8, 10};
    int X1 = 9;
    cout << countElementsLessThanOrEqualTo(A1, X1) << endl; // Output: 5

    // Example 2
    vector<int> A2 = {1, 2, 2, 2, 5, 7, 9};
    int X2 = 2;
    cout << countElementsLessThanOrEqualTo(A2, X2) << endl; // Output: 4

    return 0;
}
