#include<bits/stdc++.h>
using namespace std;

// question link -: https://atcoder.jp/contests/dp/tasks/dp_b

vector<int> dp;

int f(int i, int k, vector<int>& h, int n){
    if(i>=n)return 0;

    if(dp[i]!=-1)return dp[i];

    int res=INT_MAX;
    
    for(int j=1; j<=k; j++){
        if(i+j>n)break; // corner case - if it exceeds vector
        res=min(res,(abs(h[i]-h[i+j])+f(i+j,k,h,n)));
    }
    return dp[i]=res;

}



int main(){
    int n, k;
    cin>>n>>k;
    vector<int> h(n);
 for(int i=0; i<n; i++){
    cin>>h[i];
 }
    dp.clear();
    dp.resize(n+1, -1);
 
 
 
 cout<<f(0,k,h,n-1);
 return 0;

}