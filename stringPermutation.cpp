#include<bits/stdc++.h>
using namespace std;
void f(string ori,int i){
    if(i==ori.size()){
        
        cout<<ori;
        cout<<endl;
        return;
    }
    for(int j=i; j<ori.size(); j++){
        swap(ori[i],ori[j]);
        f(ori,i+1);
        swap(ori[i],ori[j]);
    }
}
int main(){
    string s="abcd";
    f(s,0);
    return 0;
}