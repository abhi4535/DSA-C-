#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string space;
    getline(cin, space);
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<int>x(m);
        vector<int>y(n);
        for(int i=0; i<m; i++){
            cin>>x[i];
        }
        for(int i=0; i<n; i++){
            cin>>y[i];
        }
        int ans=0;
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int i=0,j=0,noY=1,noX=1;
        while(i<m || j<n){
            if(i<m && (j<n)? x[i]>=y[j] : 1){
                ans+=(noX*x[i]);
                noY++;
                i++;
            }
            else if(j<n){
                ans+=(noY*y[j]);
                noX++;
                j++;
            }
        }
        cout<<ans;
    }
}