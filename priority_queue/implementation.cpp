#include<bits/stdc++.h>
using namespace  std;

class upheapify{
    
    vector<int> hp;
    public:

    void maxHeap(int ci){
        while(ci>0)
        {
            int pi=(ci-1)/2;
        if(hp[pi]<hp[ci]){
            swap(hp[pi],hp[ci]);
            ci=pi;

        }
        else{
            break;
        }
    }
    }

    void push(int el){
        hp.push_back(el);
        maxHeap(hp.size()-1);
    }

    void display(){
        cout<<'[';
        for(int i=0; i<hp.size(); i++){
            cout<<hp[i]<<',';
        }
        cout<<']'<<endl;
    }

    void downHeapify(int idx){
        while(idx<hp.size()){
        int lc=idx*2+1;
        int rc=idx*2+2;
        int maxEl=idx;
        if(hp.empty()) break;
        if(lc>hp.size()) break;
        else{
            if(hp[maxEl]<hp[lc]) maxEl=lc;
        }
        if(rc<hp.size() && hp[maxEl]<hp[rc]) maxEl=rc;

        if(idx != maxEl){
            swap(hp[idx], hp[maxEl]);
            idx=maxEl;
        }
        else{
            break;
        }
        
        }

    }

   int pop_max(){
    int maxEl=hp[0];
        swap(hp[0], hp[hp.size()-1]);
        hp.pop_back();
        downHeapify(0);
        return maxEl;
    }

    bool isEmpty(){
        return hp.size();
    }

    void deleteByIndex(int idx){
        swap(hp[idx], hp[hp.size()-1]);
        hp.pop_back();
        int pi=(idx-1)/2;
        if(hp[pi]<hp[idx]) maxHeap(idx);
        else downHeapify(idx);
    }



};

int main(){
    upheapify hp;
    vector<int> hpDemo;
    for(int i=0; i<10; i++){
        int random = 2+ (rand() % 100);
        hp.push(random);
        hpDemo.push_back(random);
    }

    hp.display();
    // cout<<'[';
    // for(int i=0; i<hpDemo.size(); i++){
    //     cout<<hpDemo[i]<<',';
    // }
    // cout<<']'<<endl;
    cout<<hp.pop_max()<<endl;
    hp.display();
    hp.deleteByIndex(0);
    hp.display();
    return 0;

}