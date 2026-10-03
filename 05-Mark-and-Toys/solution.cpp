// Problem: Mark and Toys
// Approach: Sort prices and purchase the cheapest toys while staying within budget.
// Time Complexity: O(N log N)
// Auxiliary Space: O(1)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> prices(n);

    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    sort(prices.begin(), prices.end());

    int count = 0;
    int spent = 0;

    for (int price : prices) {
        if (spent + price <= k) {
            spent += price;
            count++;
        } else {
            break;
        }
    }

    cout << count;

    return 0;
}
