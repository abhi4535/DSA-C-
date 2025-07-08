#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>l(n+5,0);
    vector<int>r(n+5,0);
    for(int i=0; i<m; i++){
        int a,b;
        cin>>a>>b;
        l[a]++;
        r[b]++;
    }
    vector<int>f(n+5,0);
    f[1]=1;
    for(int i=1; i<n+1; i++ ){
        f[i]=l[i]-r[i-1]+f[i-1];
    }
    vector<int> c(n+5,0);
    for(int i=0; i<f.size(); i++){
        c[f[i]]++;
    }
    for(int i=c.size()-2; i>=0; i--){
         c[i]=c[i]+c[i+1];
    }
    int q;
    for(int i=0; i<q; i++){
        int x;
        cin>>x;
        cout<<c[x]<<" ";
    }
    return 0;
}