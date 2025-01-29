#include<bits/stdc++.h>
using namespace std;

// top-down solution 

vector<int> dp;

int f(int n){
    if(n==0 || n==1) return n;

    if(dp[n]!=-1)return dp[n]; //cheching whether the stste is precomputed or not

    return dp[n]=f(n-1)+f(n-2);
}

int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1, -1);//initialising the dp vector with value -1
    cout<<f(n);
    return 0;
}
