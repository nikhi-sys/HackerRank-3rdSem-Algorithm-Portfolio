// Problem: Mini-Max Sum
// Approach: Calculate total sum, minimum value, and maximum value.
// Time Complexity: O(N)
// Auxiliary Space: O(N)
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    long long total = 0;
    long long minValue = arr[0];
    long long maxValue = arr[0];

    for (long long x : arr) {
        total += x;
        minValue = min(minValue, x);
        maxValue = max(maxValue, x);
    }

    cout << total - maxValue << " " << total - minValue;

    return 0;
}
