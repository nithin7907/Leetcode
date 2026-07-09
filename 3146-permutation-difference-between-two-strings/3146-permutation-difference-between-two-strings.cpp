class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.length();
        int m=t.length();
        int ans=0;
        map<char,int>map1;
        map<char,int>map2;
        for(int i=0;i<n;i++)
        {
            map1[s[i]]=i;
        }
        for(int i=0;i<m;i++)
        {
            map2[t[i]]=i;
        }
        for(auto x : map1)
        {
            ans+=abs(map2[x.first]-x.second);
        }
        return ans;

        
    }
};