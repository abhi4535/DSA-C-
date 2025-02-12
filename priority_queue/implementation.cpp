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

    bool isEmpty(){
        return hp.size();
    }


};

int main(){
    upheapify hp;
    vector<int> hpDemo;
    for(int i=0; i<20; i++){
        int random = 1+ (rand() % 100);
        hp.push(random);
        hpDemo.push_back(random);
    }

    hp.display();
    cout<<'[';
    for(int i=0; i<hpDemo.size(); i++){
        cout<<hpDemo[i]<<',';
    }
    cout<<']'<<endl;
    return 0;

}