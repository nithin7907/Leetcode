class Solution {
public:
    string frequencySort(string s) {
         int n=s.length();
         string ans="";
         char c;
         int largest=INT_MIN;
         map<char,int>map1;
         for(int i=0;i<n;i++)
         {
            map1[s[i]]++;
         }
         
    while(!map1.empty())
    {

        for(auto x :map1)
        {
            if(x.second>largest)
            {
                largest=x.second;
                c=x.first;
            }
        }
              while(largest>0)
               {
                  ans+=c;
                  largest--;
               }
             map1.erase(c);
    }
        
    

         return ans;

        
    }
};