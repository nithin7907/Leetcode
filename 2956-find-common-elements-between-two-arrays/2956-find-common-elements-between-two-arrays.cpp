class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        map<int,int>map1;
        map<int,int>map2;
        int count=0;
        for(int i=0;i<nums2.size();i++)
        {
            map1[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            map2[nums1[i]]++;
        }
        
      
        int i=0;
            while(i<nums1.size())
            {
                if(map1.count(nums1[i])==1)
                {
                      count++;
                }
                i++;
            }
        vec.push_back(count);
        i=0;
        count=0;
        while(i<nums2.size())
        {
            if(map2.count(nums2[i])==1)
            {
                count++;
            }
            i++;
        }
        vec.push_back(count);
        return vec;

        
    }
};