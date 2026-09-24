class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        vector<int> feq(26,0);

        for(char &c:s)
            feq[c-'a']++;


        for(char &c:t)
            feq[c-'a']--;

        for(int i:feq)
            if(i!=0)
                return false;

        return true;        
        
    }
};