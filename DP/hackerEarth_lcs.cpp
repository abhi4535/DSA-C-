#include <bits/stdc++.h>

using namespace std;
vector<vector<vector<int>>>dp;

long long f(vector<int> &n1,vector<int> &n2,int i, int j,int k){
    if(i>=n1.size())return 0;
    if(j>=n2.size())return 0;
    if(dp[i][j][k]!=-1)return dp[i][j][k];
    long long res=0;
    if(n1[i]==n2[j]) return dp[i][j][k]= 1+f(n1,n2,i+1,j+1,k);
    
    else{
    if(k>0){
        res=max(res,1+f(n1,n2,i+1,j+1,--k));
    }
    // else return dp[i][j][k]= max({f(n1,n2,i+1,j,k),f(n1,n2,i,j+1,k),(k>0) ? 1+f(n1,n2,i+1,j+1,--k):0});
    
        res= max(res,f(n1,n2,i+1,j,k));
        res= max(res,f(n1,n2,i,j+1,k));

    
    
    return dp[i][j][k]=res;
}
}
int main() {
	int n,m,k;
	cin >> n>>m>>k;    
	vector<int>n1(n);
    vector<int>n2(m);
    for(int i=0; i<n; i++){
        cin>>n1[i];
    }
    for(int i=0; i<m; i++){
        cin>>n2[i];
    }
    // int ans=INT_MIN;
    dp.clear();
    dp.resize(n+2,vector<vector<int>>(m+2,vector<int>(k+2,-1)));
    // for(int i=n-1; i>=0; i--){
    //     for(int j=m-1; j>=0; j--){
    //     if(n1[i]==n2[j]){
    //         dp[i][j][k]= 1+dp[i+1][j+1][k];
    //         ans=max(dp[i][j][k],ans);
    //         return dp[i][j][k];
    //     }
    //         else{
    //              dp[i][j][k]= max({dp[i+1][j][k],dp[i][j+1][k],(k>0) ? 1+dp[i+1][j+1][--k]:0});
    //              ans=max(dp[i][j][k],ans);
    //              return dp[i][j][k];
    //         }
    //     }
    // }
    cout<<f(n1,n2,0,0,k);
    return 0;

}