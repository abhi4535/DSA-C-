#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp;

int f(vector<int> &arr1,vector<int> &arr2, int i,int tv){
    if(i>=arr1.size())return INT_MAX;
    if(tv==0)return 0;
    if(dp[i][tv]!=-1)return dp[i][tv];
    int res=INT_MAX;
    if(tv-arr2[i]>=0){
        res=min(res,arr1[i]+f(arr1,arr2,i+1,tv-arr2[i]));
    }
     
    res=min(res,f(arr1,arr2,i+1,tv));
    return dp[i][tv]= res;


}

int main(){
   int n,w;
   cin>>n>>w;
   dp.clear();
   dp.resize(105,vector<int>(1005,-1));
   vector<int>arr1(n),arr2(n);
   for(int i=0; i<n; i++){
    cin>>arr1[i]>>arr2[i];
   }
   int ans=0;
   for(int i=0; i<=1000; i++){
    if(f(arr1,arr2,0,i)<=w) ans=max(ans,i);
   }
   return ans;
}