class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<string>vec;
        map<char,int>map1;
        map<char,int>map2;
        string m=words[0];
        string l;
        for(int i=0;i<m.length();i++)
        {
            map1[m[i]]++;
        }
        for(int i=1;i<words.size();i++)
        {
           l=words[i];
           
           for(int i=0;i<l.length();i++)
           {
             map2[l[i]]++;
           }
           for(auto x:map1)
           {
               map1[x.first]=min(map1[x.first],map2[x.first]);
           }
           map2.clear();

        }
        for(auto x : map1)
        {
            while(x.second>=1)
            {
                vec.push_back(string(1,x.first));
                x.second--;
            }
        }
        return vec;

        
    }
};