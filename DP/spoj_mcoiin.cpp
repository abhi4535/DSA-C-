#include<bits/stdc++.h>
using namespace std;



int fbu( int k,int l){
    
    
     
}

int main(){
    int k,l,m;
    cin>>k>>l>>m;
    vector<bool>dp(1000005,0);
    dp[1]=dp[k]=dp[l]=1;
    for(int i=2; i<=1000000; i++){
        if(i==l || i==k)continue;
        dp[i]=!(dp[i-1] && ((i-k >=1) ? dp[i-k] :1) && ((i-l >=1) ? dp[i-l] :1));
    }
    
    
    while(m--){
        int n;
        cin>>n;
        if(dp[n])cout<<'A';
        else cout<<'B';
    }
    
    return 0;
}