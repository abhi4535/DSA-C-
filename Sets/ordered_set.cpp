#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(5);
    for(auto it: s){
        cout<<it<<" "<<endl;
    }
    return 0;
}