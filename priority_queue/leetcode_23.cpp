#include<bits/stdc++.h>
using namespace std;

// int main(){
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//  class cmp{
//     public:
//          bool operator()(ListNode* l1,ListNode* l2){
//             return l1->val>l2->val;
//          }
//  };
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
//         for(int i=0; i<lists.size(); i++){
//             if(lists[i]==NULL)continue;
//             pq.push(lists[i]);
//         }
//         ListNode* dummy=new ListNode(-1);
//         ListNode* ptr=dummy;
//         while(!pq.empty()){
//           ListNode* curr=pq.top();
//           pq.pop();
//           if(curr->next!=NULL)pq.push(curr->next);
//           ptr->next=curr;
//           ptr=ptr->next;
//         }
//       return dummy->next;
//     }
// };
// }