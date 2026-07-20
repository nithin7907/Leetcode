class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
         map<int,unordered_set<int>>map1;
         vector<int>ans(k,0);
         int n=logs.size();
         int size=0;
         for(int i=0;i<n;i++)
         {
           map1[logs[i][0]].insert(logs[i][1]);
         }
         for(auto x:map1)
         {
            size=map1[x.first].size();
            ans[size-1]++;
         }
         return ans;
        
    }
};