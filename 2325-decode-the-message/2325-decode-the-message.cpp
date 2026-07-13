class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans="";
        int key_len=key.length();
        int mess_len=message.length();
        char current_letter='a';
        map<char,int>map1;
        map1[' ']=' ';
        for(int i=0;i<key_len;i++)
        {
           if(map1.count(key[i])==0 && key[i]!=' ' && current_letter<='z')
           {
             map1[key[i]]=current_letter;
             current_letter++;
           }
          
        }
        for(int i=0;i<mess_len;i++)
        {
            ans+=map1[message[i]];
        }
        return ans;

        
    }
};