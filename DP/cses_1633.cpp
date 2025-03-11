#include<bits/stdc++.h>
using namespace std;

vector<int>dp;

long long f(int n){
    if(n==0) return 1;
    if(dp[n]!=-1)return dp[n];
    long long ans=0;
    for(int i=1; i<=6; i++){
        if(n-i <0 )break;
      ans+=f(n-i);
    }
    return dp[n]= ans%1000000007;
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1,-1);
    cout<<f(n);

    return 0;

}