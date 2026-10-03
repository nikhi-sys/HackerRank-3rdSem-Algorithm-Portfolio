// Problem: Birthday Cake Candles
// Approach: Find the maximum candle height and count its occurrences.
// Time Complexity: O(N)
// Auxiliary Space: O(N)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);

    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    int maxHeight = candles[0];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (candles[i] > maxHeight) {
            maxHeight = candles[i];
            count = 1;
        }
        else if (candles[i] == maxHeight) {
            count++;
        }
    }

    cout << count;

    return 0;
}
