class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();

        map<int,int>map1;
        map<int,int>map2;
        for(int i=0;i<n;i++)
        {
            map1[arr[i]]++;
        }
        for(auto x : map1)
        {
            map2[x.second]++;
        
        if(map2[x.second]>1)
        {
            return false;
        }
        }
        return true;
       
    }
};