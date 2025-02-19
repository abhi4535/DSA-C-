#include<iostream>
#include<unordered_set>
using namespace std;

//baic function:-
//insert()
//erase()
//size()
//find()
//begin()
//end()

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    int target=5;
    string a=45;
    cout<<a;
    //s.find()-> it returns the element if found otherwise it returns the last element
    if(s.find(target)!= s.end()){
       cout<<"exists"<<endl;
       cout<<2/5;
    }
    else {
        cout<<"does not exists"<<endl;
        cout<<2/5;
    }
    
    return 0;
}