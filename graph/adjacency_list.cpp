#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
void add(int src,int dest, bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void display(){
    for(int i=0; i<graph.size(); i++){
        cout<<i<<"->";
        for(auto it: graph[i]){
            cout<<it<<",";
        }
        cout<<endl;
    }
}
int main(){
    int v;
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int src,dest;
        cin>>src>>dest;
        add(src,dest);
    }
    display();
    return 0;
}