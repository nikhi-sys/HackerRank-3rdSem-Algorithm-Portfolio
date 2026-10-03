// Problem: Binary Search
// Approach: Repeatedly divide the sorted search range in half.
// Time Complexity: O(log N)
// Auxiliary Space: O(1)
#include <bits/stdc++.h>
using namespace std;

int introTutorial(int V, vector<int> arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == V) {
            return mid;
        }
        else if (arr[mid] < V) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    int V, n;
    cin >> V;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << introTutorial(V, arr);

    return 0;
}
