class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>map1;
        map<int,int>map2;
        int smallest=INT_MAX;
        for(int i=0;i<nums2.size();i++)
        {
            map1[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            map2[nums1[i]]++;
        }


        
        for(int i=0;i<nums1.size();i++)
        {
            if(map1.count(nums1[i])==1 && nums1[i]<smallest)
            {
               smallest=nums1[i];
            }
        }
        if(smallest!=INT_MAX)
        {
            return smallest;
        }
         if(map2.begin()->first < map1.begin()->first)
         {
              return map2.begin()->first*10+map1.begin()->first;
         }
         else{
            return map1.begin()->first*10+map2.begin()->first;
         }
        

         

        
    }
};