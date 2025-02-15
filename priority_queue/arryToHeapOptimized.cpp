#include<bits/stdc++.h>
using namespace std;

void downHeapify(int idx, vector<int> &arr){
    while(idx<arr.size()){
    int lc=idx*2+1;
    int rc=idx*2+2;
    int maxEl=idx;
    if(arr.empty()) break;
    if(lc>arr.size()) break;
    else{
        if(arr[maxEl]<arr[lc]) maxEl=lc;
    }
    if(rc<arr.size() && arr[maxEl]<arr[rc]) maxEl=rc;

    if(idx != maxEl){
        swap(arr[idx], arr[maxEl]);
        idx=maxEl;
    }
    else{
        break;
    }
    
    }

}

int main(){
    vector<int> arr;
    for(int i=0; i<10; i++){
        int ran=1+(rand()%100);
        arr.push_back(ran);
        
    }
    arr.push_back(998);

    for(int i=(arr.size())/2; i>=0; i--){
        downHeapify(i, arr);
    }

    for(int i=0; i<10; i++){
        cout<<arr[i]<<',';
    }
}