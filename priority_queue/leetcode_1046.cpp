#include<bits/stdc++.h>
using namespace std;

//leetcode problem 1046
int main(){
    class Solution {
        public:
            int lastStoneWeight(vector<int>& stones) {
                priority_queue<int> pq(stones.begin(),stones.end());
                while(pq.size()>1){
                    int t1=pq.top();
                    pq.pop();
        
                    
                    int t2=pq.top();
                    pq.pop();
                    
                    int sub=abs(t1-t2);
                    if(sub!=0)pq.push(sub);
                }
                
                if(pq.size()==0) return 0;
                return pq.top();
            }
        };
}