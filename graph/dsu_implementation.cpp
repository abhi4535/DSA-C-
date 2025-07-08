#include<bits/stdc++.h>
using namespace std;

int get(vector<int> &parent,int x){
    return  parent[x]=(parent[x]==x)? x:get(parent,parent[x]);
}

int uniun(vector<int> &parent, vector<int>&sz, vector<int> &rank,vector<int>&maximal,vector<int>&minimal,int a,int b){
    a=get(parent,a);
    b=get(parent,b);
    if(a==b)return;
    if(rank[a]>=rank[b]){
        rank[a]++;
        maximal[a]=max(maximal[a],maximal[b]);
        minimal[a]=min(minimal[a],minimal[b]);
        sz[a]+=sz[b];
        parent[b]=a;
    }
    else{
        maximal[b]=max(maximal[a],maximal[b]);
        minimal[b]=min(minimal[a],minimal[b]);
        sz[b]+=sz[a];
        rank[b]++;
        parent[a]=b;
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>parent(n+1);
    vector<int>rank(n+1,0);
    vector<int>sz(n+1,1);
    vector<int>minimal(n+1);
    vector<int>maximal(n+1);
    for(int i=0; i<parent.size(); i++){
        parent[i]=i;
        minimal[i]=i;
        maximal[i]=i;
    }
    while(n--){
        
        string str;
        cin>>str;
        if(str=="uniun"){
            int x,y;
            cin>>x>>y;
            cout<<uniun(parent,rank,sz,maximal,minimal,x,y)<<endl;
        }
        else{
            int x;
            x=get(parent,x);
            cout<<minimal[x]<<maximal[x]<<x<<endl;
        }
        

    }
    return 0;

}