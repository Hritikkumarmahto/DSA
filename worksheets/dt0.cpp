#include <iostream>
#include<iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAX_N = 1000000; // Maximum value of n

int minOperations[MAX_N + 1]; // To store the minimum operations required for each n

void preprocess() {
    minOperations[0] = 0;
    minOperations[1] = 1;

    for (int i = 2; i <= MAX_N; ++i) {
        minOperations[i] = minOperations[i - 1] + 1; // Using subtraction operation

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                minOperations[i] = min(minOperations[i], minOperations[i / j] + 1); // Using division operation
            }
        }
    }
}

int minOperationsToZero(int n) {
    preprocess();

    queue<int> q;
    q.push(n);

    vector<bool> visited(MAX_N + 1, false);
    visited[n] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        if (current == 0) {
            return minOperations[current];
        }

        for (int i = 2; i * i <= current; ++i) {
            if (current % i == 0) {
                int next = max(i, current / i);

                if (!visited[next]) {
                    visited[next] = true;
                    q.push(next);
                    minOperations[next] = minOperations[current] + 1;
                }
            }
        }
    }

    return minOperations[0];
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << minOperationsToZero(n) << endl;
    }

    return 0;
}
