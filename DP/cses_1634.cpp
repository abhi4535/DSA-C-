#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int f(vector<int>& c, int x) {
    if (x == 0) return 0;
    if (dp[x] != -1) return dp[x];

    int result = INT_MAX - 1; // Avoid overflow
    for (int coin : c) {
        if (x - coin >= 0) {
            result = min(result, f(c, x - coin) + 1);
        }
    }
    
    return dp[x] = result;
}

int main() {
    int n, x;
    cin >> n >> x;
    dp.assign(x + 1, -1);
    
    vector<int> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    int ans = f(c, x);
    cout << (ans == INT_MAX - 1 ? -1 : ans);
    return 0;
}
