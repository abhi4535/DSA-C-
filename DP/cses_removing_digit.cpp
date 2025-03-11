#include<bits/stdc++.h>
using namespace std;
vector<int>dp;

int maxi(int n){
    string s = to_string(n);
    char c = '0';
    for(int i=0; i<s.size(); i++){
        if(c<s[i]) c=s[i];
    }
    int ans= (c-'0');
    return ans;
}

int f(int n){
    if(n==0) return 0;

    if(dp[n]!=-1)return dp[n];

    return dp[n] = 1+f(n- maxi(n));
}

int main(){
  int n;
  cin>>n;
  dp.clear();
  dp.resize(n+1,-1);
  cout<<f(n)<<endl;

  return 0;
}