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

int main(){
    vector<int> arr;
    for(int i=0; i<10; i++){
        int ran=1+(rand()%100);
        arr.push_back(ran);
        upHeapify(i,arr);
    }

    for(int i=0; i<10; i++){
        cout<<arr[i]<<',';
    }


}
