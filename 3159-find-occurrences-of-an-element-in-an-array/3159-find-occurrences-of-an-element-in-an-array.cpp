class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>ans;
        int k;
        int n=nums.size();
        int m=queries.size();
        map<int,vector<int>>map1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==x)
            {
             map1[nums[i]].push_back(i);
            }
        }

       for(int i=0;i<m;i++)
       {
         k=queries[i];
         if(k<=map1[x].size())
         {
            ans.push_back(map1[x][k-1]);
         }
         else{
            ans.push_back(-1);
         }
       }
       return ans;






        
    }
};