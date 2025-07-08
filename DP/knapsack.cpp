#include<bits/stdc++.h>
using namespace std;
vector<vector<long long>>dp;
long long f(vector<int> &arr1,vector<int> &arr2,int i,int wi,int w){
     if(i>=arr1.size())return 0;
     if(dp[i][wi]!=-1)return dp[i][wi];
     long long res=0;
     if(arr2[i]+wi<=w){
        res=max(res,arr1[i]+f(arr1,arr2,i+1,arr2[i]+wi,w));
     }
     res=max(res,f(arr1,arr2,i+1,wi,w));
     return dp[i][wi]= res;
}
int main(){
    int n,w;
    cin>>n>>w;
    dp.clear();
    dp.resize(105,vector<long long>(100005,-1));
    vector<int>arr1(n),arr2(n);
    for(int i=0; i<n; i++){
        cin>>arr2[i]>>arr1[i];
    }
    cout<<f(arr1,arr2,0,0,w);
}