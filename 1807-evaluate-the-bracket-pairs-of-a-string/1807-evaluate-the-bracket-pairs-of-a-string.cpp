class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=knowledge.size();
        map<string,string>map1;
        string temp="";
        string result="";
        bool in_bracket=false;
        for(int i=0;i<n;i++)
        {
            map1[knowledge[i][0]]=knowledge[i][1];
        }
    
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
               in_bracket=true;
               
            }
            else if(s[i]==')')
            {
                in_bracket=false;
                 if(map1.count(temp)==0)
                 {
                    result+='?';
                 }
                 else{
                    result+=map1[temp];
                 }
                 temp.clear();
            }
            else if(in_bracket==true)
            {
                temp+=s[i];
            }
            else{
                   result+=s[i];
            }
        }
         return result;

        
    }
};