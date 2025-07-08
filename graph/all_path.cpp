#include<bits/stdc++.h>
using namespace std;

vector<list<int>>graph;
vector<vector<int>>res;
unordered_set<int> st;
void add(int src,int dest, bool bi_dir=true){
    graph[src].push_back(dest);
    if(bi_dir){
        graph[dest].push_back(src);
    }
}

void dfs(int src,int dest,vector<int> &path){
    
    if(src==dest){
        path.push_back(src);
        res.push_back(path);
        path.pop_back();
        return;
    }
    st.insert(src);
    path.push_back(src);
    for(auto it: graph[src]){
        if(!st.count(it)){
            dfs(it,dest,path);
            
        }
    }
    path.pop_back();
    st.erase(src);
    return;
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
    // display();
    int x,y;
    cin>>x>>y;
    vector<int> path;
    st.clear();
    res.clear();
    dfs(x,y,path);
    cout<<res.size();
    return 0;
}