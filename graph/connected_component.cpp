#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
void add(int src,int dest, bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}
void dfs(int node, unordered_set<int> &visited){
    if(visited.count(node))return;
    visited.insert(node);
    for(auto nbr:graph[node]){
        if(!visited.count(nbr)){
            dfs(nbr,visited);
        }
    }
}

int connected_component(){
   int res=0;
   unordered_set<int>visited;
   for(int i=0; i<v; i++){
     if(visited.count(i)==0){
        res++;
        dfs(i,visited);
     }
   }
   return res;
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