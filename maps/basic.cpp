#include<iostream>
#include<unordered_map>
using namespace std;

//method in map:-
//insert()
//erase()
//size()
//count()
//find()

int main(){
    unordered_map<string,int>mp;
    pair<string, int>p;
    p.first="abhishek";
    p.second=1;
    cout<<p.first<<" "<<p.second<<endl;
    mp.insert(p);

    mp["ritik"]=34;
    mp["ravi"]=34;

    return 0;
}