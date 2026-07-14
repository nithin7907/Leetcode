class Solution {
public:
    int numberOfSpecialChars(string word) { 
        map<char,int>small;
        map<char,int>large;
        int count=0;
        int n=word.length();
        for(int i=0;i<n;i++)
        {
            if(islower(word[i]))
            {
                small[word[i]]=i;
            }
            else if(!islower(word[i]) && large.count(word[i])==0){
                large[word[i]]=i;
            }
        }
        for(auto x : large)
        {
            if(small.count(tolower(x.first))==1 && small[tolower(x.first)]<x.second)
            {
                count++;
            }
        }
        return count;
       
        
    }
};