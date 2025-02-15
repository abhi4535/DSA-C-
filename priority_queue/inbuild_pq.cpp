#include<iostream>
#include<queue>

using namespace std;

int main(){

    priority_queue<int> pq;// this is by default max heap for min heap we have pass some parameter 

    priority_queue<int, vector<int>, greater<int>> hp;

    cout<<'[';

    for(int i=0; i<10; i++){
        int ran=1+(rand()%100);
        cout<<ran<<',';
        pq.push(ran);
    }
    cout<<']'<<endl;

    cout<<'[';

    for(int i=0; i<10; i++){
        int ran=1+(rand()%100);
        cout<<ran<<',';
        hp.push(ran);
    }
    cout<<']'<<endl;

    

    cout<<pq.top()<<endl;
    cout<<hp.top()<<endl;
    return 0;

}