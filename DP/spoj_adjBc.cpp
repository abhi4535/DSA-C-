#include<bits/stdc++.h>
using namespace std;

int dp[105][105][2];

int f(int n, int k,int l){
    if(n==1 && k==0)return 1;
    if(n==0)return 0;
    if(dp[n][k][l]!=-1)return dp[n][k][l];
    
    if(l==1) return dp[n][k][l]= f(n-1,k,0)+f(n-1, k-1, 1);
    else return dp[n][k][l]= f(n-1,k,0)+ f(n-1,k,1);
   
}

int main(){
int p,n,k,s;
cin>>p;
while(p--){
cin>>s>>n>>k;
memset(dp,-1,sizeof(dp));
cout<<s<<" "<<f(n,k,0)+ f(n,k,1)<<endl;

}
// cout<<f(100,90,0)+f(100,90,1);

return 0;
}