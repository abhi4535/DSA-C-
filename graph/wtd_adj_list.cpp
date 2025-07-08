#include<bits/stdc++.h>
using namespace std;

vector<list<pair<int,int>>>graph;
void add(int src,int dest, int wt, bool bi_dir=true){
    graph[src].push_back({dest,wt});
    if(bi_dir){
        graph[dest].push_back({src,wt});
    }
}

void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<"->";
        for(auto it: graph[i]){
            cout<<"("<<it.first<<","<<it.second<<")"<<",";
        }
        cout<<endl;
    }
}
int main(){
    int v;
    cin>>v;
    graph.resize(v,list<pair<int,int>>());
    int e;
    cin>>e;
    while(e--){
        int src,dest,wt;
        cin>>src>>dest>>wt;
        add(src,dest,wt);
    }
    display();
    return 0;
}