#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
vector<vector<int>>res;
unordered_set<int> st;
int v;
void add(int src,int dest, bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void bfs(int src, int dest,vector<int> &dist){
    queue<int>qu;
    st.clear(); 
    dist.resize(v,INT_MAX);
    dist[src]=0;
    st.insert(src);
    qu.push(src);
    while(!qu.empty()){
        int curr=qu.front();
        qu.pop();
        for(auto it: graph[curr]){
            if(!st.count(it)){
                st.insert(it);
                qu.push(it);
                dist[it]=dist[curr]+1;
                
            }
        }

    }
}

// void display(){
//     for(int i=0; i<graph.size(); i++){
//         cout<<i<<"->";
//         for(auto it: graph[i]){
//             cout<<it<<",";
//         }
//         cout<<endl;
//     }
// }
int main(){
    // int v;
    cin>>v;
    graph.resize(v,list<int>());
    int e;
    cin>>e;
    while(e--){
        int src,dest;
        cin>>src>>dest;
        add(src,dest);
    }
    // display();
    int x,y;
    cin>>x>>y;
    vector<int> path;
    st.clear();
    res.clear();
    bfs(x,y,path);
    for(auto it: path){
        cout<<it<<" ";
    }
    return 0;
}