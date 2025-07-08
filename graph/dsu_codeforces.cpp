#include<bits/stdc++.h>
using namespace std;
int get(vector<int> &parent,int x){
    return parent[x]=(parent[x]==x)? x:get(parent,parent[x]);
}

void uniun(vector<int> &parent,vector<pair<pair<int,int>,int>> &sz, int a,int b){
    a=get(parent,a);
    b=get(parent,b);
    if(sz[a].second>=sz[b].second){
        sz[a].second+=sz[b].second;
        sz[a].first.first=min(sz[a].first.first,sz[b].first.first);
        sz[a].first.second=max(sz[a].first.second,sz[b].first.second);
    }
    else {
        sz[b].second+=sz[a].second;
        sz[b].first.first=min(sz[a].first.first,sz[b].first.first);
        sz[b].first.second=max(sz[a].first.second,sz[b].first.second);
    }
}
int main(){

}