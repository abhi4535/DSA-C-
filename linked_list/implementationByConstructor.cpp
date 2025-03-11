#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
    }
};
int main(){
    // 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next= &c;
    c.next = &d;
    d.next = NULL;

    cout<<&a<<endl; // printing a ka address
    cout<<a.next<<endl; // printing next me stored address

    return 0;

}
