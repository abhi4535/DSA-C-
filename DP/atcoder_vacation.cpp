#include<bits/stdc++.h>
using namespace std;


int main(){
 int n;
 cin>>n;
 int ans;
 vector<vector<int>> dp(n,vector<int>(3,0));
 for(int i=0; i<n; i++){
    for(int j=0; j<3; j++){
        cin>>dp[i][j];
    }
 }
 for(int i=1; i<n; i++){
    dp[i][0]+=max(dp[i-1][1],dp[i-1][2]);
    dp[i][1]+=max(dp[i-1][0],dp[i-1][2]);
    dp[i][2]+=max(dp[i-1][1],dp[i-1][0]);
 }
 ans=max({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
 cout<<ans;
 return 0;
}