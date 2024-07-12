#include <iostream>
using namespace std;

void update(int arr[], int n, int key, int num) {
    arr[key] = num;  // Update the array element at the specified index
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n, key, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the location where you want to update the number: ";
    cin >> key;
    cout << "Enter the number: ";
    cin >> num;
    update(arr, n, key, num); // Call the update function with the correct arguments
    return 0;
}
