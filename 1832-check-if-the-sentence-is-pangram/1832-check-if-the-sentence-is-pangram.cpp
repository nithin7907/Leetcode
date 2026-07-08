class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        map<char,int>ap;
        for(int i=0;i<n;i++)
        {
            ap[sentence[i]]++;
        }
        if(ap.size()==26)
        {
            return true;

        }
        return false;
    }
};