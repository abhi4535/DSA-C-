#include<bits/stdc++.h>
using namespace std;
 int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<2;
        return 0;

    }
    int ans=1;
    for(int i=0; i<=n; i++){
        ans+=2;
    }
    cout<<ans;
    return 0;
 }