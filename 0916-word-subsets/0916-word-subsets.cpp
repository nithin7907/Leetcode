class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans;
        map<char,int>map1;
        map<char,int>map2;
        map<char,int>temp;
        int n=words2.size();
        int m=words1.size();
        string s="";
        int size;
        bool flag;
        for(int i=0;i<n;i++)
        {
            s=words2[i];
            size=s.length();
            for(int i=0;i<size;i++)
            {
                temp[s[i]]++;
            }
            for(auto x :temp)
            {
                map1[x.first]=max(map1[x.first],x.second);
            }
            temp.clear();

            
        }
        for(int i=0;i<m;i++)
        {
            s=words1[i];
            size=s.length();
            flag=true;
            for(int i=0;i<size;i++)
            {
                map2[s[i]]++;
            }
            for(auto x:map1)
            {
                if(x.second>map2[x.first])
                {
                    
                   flag=false;
                   break;
                }
                

            }
            if(flag==true)
            {
               ans.push_back(s);
            }
            map2.clear();
            
        }
        return ans;

        
    }
};