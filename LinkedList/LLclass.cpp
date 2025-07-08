#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedList(){
        this->head=NULL;
        this->tail=NULL;
        size=0;
    }
    void insertEnd(int val){
        Node* temp = new Node(val);
        if(head==tail){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display(){
        Node* temp=head;
        while(head!=NULL){
            cout<<temp->val;
            temp=temp->next;
        }
    }
};
int main(){
    
}