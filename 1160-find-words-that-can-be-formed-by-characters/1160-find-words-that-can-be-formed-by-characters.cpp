class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int wsize=words.size();
        int csize=chars.length();
        string s="";
        int n;
        int count=0;
        int ans=0;
        map<char,int>cmap;
        map<char,int>wmap;
        for(int i=0;i<csize;i++)
        {
            cmap[chars[i]]++;
        }
        for(int i=0;i<wsize;i++)
        {
            count=0;
           s=words[i];
           n=s.length();
           for(int i=0;i<n;i++)
           {
             wmap[s[i]]++;
           }
           for(auto x : wmap)
           {
              if(cmap.count(x.first)==1 && x.second<=cmap[x.first])
              {
                 count+=x.second;
              }
              else{
                count=0;
                break;
                
              }
           }
           ans+=count;

           wmap.clear();

        }
        return ans;
        
    }
};