#include<bits/stdc++.h>
using namespace std;

// bottom-up soln

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1);
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++){
        dp[i]=dp[i-1]+dp[i-2]; // here problem is solved iteratively from bottom to up
    }
  cout<<dp[n];
  return 0;
}
