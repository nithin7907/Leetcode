class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<int>current;
        vector<vector<int>>result;
        map<int,vector<int>>map1;
        for(int i=0;i<n;i++)
        {
             map1[groupSizes[i]].push_back(i);
        }
        for(auto x :map1)
        {
             int size=x.first;
              auto& people=x.second;
              
             for(int person : people)
             {
                  current.push_back(person);
                  if(current.size()==size)
                  {
                    result.push_back(current);
                    current.clear();
                  }  
             }
        }
        return result;
        
    }
};