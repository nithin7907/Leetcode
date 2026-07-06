class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        map<int,int>map1;
        for(int i=0;i<n;i++)
        {
            map1[nums[i]]++;
        }
        for(auto x : map1)
        {
            if(x.second==1)
            {
               sum+=x.first;
            }
        }
         return sum;
        
    }
};