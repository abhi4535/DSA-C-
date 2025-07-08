#include<bits/stdc++.h>
using namespace std;

int f(int arr[][2], int i, int k,int j,int n){
    if(i<0)return 0;

    if(k<=n/2 && j<=n/2){
        return min(arr[i][0]+f(arr,i-1,++k,j,n),arr[i][1]+f(arr,i-1,k,++j,n));
    }
    else if(j>n/2) return arr[i][0]+f(arr,i-1,++k,j,n);
    else return arr[i][1]+f(arr,i-1,k,++j,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0; i<n; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    cout<<f(arr,n-1,1,1,n);
}