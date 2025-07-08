#include <bits/stdc++.h>
#define mod 100000007
using namespace std;

int dp[22][1 << 22];
long long ans = 0;
int f(int i, int n, vector<vector<int>> &c, int mask) {
    if (i == n) {
        return (mask == 0) ? 1 : 0;
    }

    if (dp[i][mask] != -1) return dp[i][mask];

    
    for (int w = 0; w < n; w++) {
        bool available = (mask & (1 << w));
        if (available & c[i][w]) {
            ans = ((ans % mod) + f(i + 1, n, c, mask ^ (1 << w))%mod) % mod;
        }
    }

    return dp[i][mask] = ans;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> c(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> c[i][j];

    memset(dp, -1, sizeof dp);
    cout << f(0, n, c, (1 << n)-1 ) << "\n";

    return 0;
}
