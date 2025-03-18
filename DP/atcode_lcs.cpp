#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>dp;

int f(string &s1, string &s2,int i,int j){
     if(i>=s1.size())return 0;
     if(j>=s2.size())return 0;

     if(s1[i]==s2[j])return 1+f(s1,s2,i+1,j+1);
     else return max(f(s1,s2,i+1,j),f(s1,s2,i,j+1));
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    dp.clear();
    dp.resize(1005,vector<int>(1005,0));
    

    for(int i=s1.size()-1; i>=0; i--){
        for(int j=s2.size()-1; j>=0; j--){
            if(s1[i]==s2[j])dp[i][j] = 1+dp[i+1][j+1];
            else dp[i][j]=  max(dp[i+1][j],dp[i][j+1]);
        }
    }
    string ans="";
    // int ind=dp[0][0];
    int i=s1.size();
    int j=s2.size();
    while(i>0 && j>0){
        if(s1[i-1]==s2[j-1]){
            ans+=s1[i-1];
            i--;
            j--;
            
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
                
            }
            else{
                j--;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;

}