#include<bits/stdc++.h>
using namespace std;

int f1(int n,vector<int> &arr){
    if(n>0){
    if(arr[n]<arr[n-1] ){
        swap(arr[n],arr[n-1]);
        f1(n-1,arr);
    }
    else return arr[n];
}
}

int f(vector<int> &arr,int i){
    if(i>=arr.size())return arr[arr.size()-1];

    if(arr[i]>=f(arr,i-1))return arr[i];
    else{
        return f1(arr[i],arr);
    }
}
int main(){
    

}