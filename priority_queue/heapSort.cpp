#include<bits/stdc++.h>
using namespace std;

void upHeapify(int ind, vector<int> &arr){
    while(ind>0){
      int pi=(ind-1)/2;
      if(arr[ind]>arr[pi]) {
        swap(arr[ind],arr[pi]);
      ind=pi;
    }
      else{
           break;
      }
    }
}

void downHeapify(int idx, vector<int> &arr, int li){
    while(idx<arr.size()){
    int lc=idx*2+1;
    int rc=idx*2+2;
    int maxEl=idx;
    if(arr.empty()) break;
    if(lc>li) break;
    else{
        if(arr[maxEl]<arr[lc]) maxEl=lc;
    }
    if(rc<li && arr[maxEl]<arr[rc]) maxEl=rc;

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
    vector<int> v;
    
    for(int i=0; i<10; i++){
        v.push_back(1+(rand()%50));
        upHeapify(i,v);
    }

    for(int i=0; i<10; i++){
        swap(v[i],v[v.size()-i-1]);
        downHeapify(i, v, v.size()-i-3);
    }

    

    for(int i=0; i<10; i++){
        cout<<v[i]<<',';
    }

    return 0;
    
    
}