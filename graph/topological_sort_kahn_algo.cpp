#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;

void add_edge(int a,int b,bool bi_dir=true){
    graph[a].push_back(b);
    if(bi_dir){
        graph[b].push_back(a);
    }
}

void topo_sort(){
    vector<int>inDegree(v,0);
    for(int i=0; i<v; i++){
        for(auto nbr:graph[i]){
            inDegree[nbr]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for(int i=0; i<inDegree.size(); i++){
        if(inDegree[i]==0){
            qu.push(i);
            vis.insert(i);
        }
    }

    while(!qu.empty()){
        int node=qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto nbr:graph[node]){
            if(!vis.count(nbr)){
                inDegree[nbr]--;
                if(inDegree[nbr]==0){
                    qu.push(nbr);
                    vis.insert(nbr);
                }
            }
        }
    }
}
int main(){
cin>>v;
int e;
cin>>e;
graph.resize(v,list<int>());
while(e--){
    int x,y;
    cin>>x>>y;
    add_edge(x,y,false);
}
 
topo_sort();
return 0;
}