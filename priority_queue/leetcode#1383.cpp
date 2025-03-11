// //problem no 1383
// #define ll long long
// #define pp pair<long long int, long long int>

// bool cmp(pp a, pp b){
//    return a.first>b.first;
// }
// class Solution {
// public:
//     int maxPerformance(int n, vector<int>& speed, vector<int>& e, int k) {
//         vector<pp> v;
//         for(int i=0; i<n; i++){
//             v.push_back({e[i],speed[i]});
//         }
//         sort(v.begin(),v.end(), cmp);

//         priority_queue<pp, vector<pp>, greater<pp>>pq;
//         ll tsum=0;
//         ll ans=INT_MIN;

//         for(int i=0; i<n; i++){
//             if(pq.size()==k){
//                 tsum -= pq.top().first;
//                 pq.pop();
//             }
//             pq.push({v[i].second,v[i].first});
//             tsum+=v[i].second;
//             ans=max(ans,tsum*v[i].first);


//         }
//         return ans%1000000007;
//     }
// };