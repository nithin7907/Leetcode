class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>vec;
        int n=nums.size();
        map<int,int>map;
        int j=0;
        int i=0;
        int largest=nums[0];
        bool flag=false;
        for(int i=0;i<k;i++)
        {
             if(nums[i]>largest)
             {
                largest=nums[i];
             }
           map[nums[i]]++;

        }
        vec.push_back(largest);
        i=0;
        for(int j=k;j<n;j++)
        {
            if(nums[i]==largest)
            {
                flag=true;
            }
            map[nums[i]]--;
            if(map[nums[i]]==0)
            {
                map.erase(nums[i]);
            }
            i++;
            map[nums[j]]++;
             if(flag==true)
            {
                largest=map.rbegin()->first;
            }
           
            if(nums[j]>=largest)
            {
                largest=nums[j];
            }
            

            vec.push_back(largest);
           
        }
        return vec;


        
    }
};