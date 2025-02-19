#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>mp;
    pair<string, int>p;
    p.first="abhishek";
    p.second=1;
    cout<<p.first<<" "<<p.second<<endl;
    mp.insert(p);

    return 0;
}