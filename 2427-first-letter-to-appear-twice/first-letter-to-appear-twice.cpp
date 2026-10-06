class Solution {
public:
    char repeatedCharacter(string s) {
        bool seen[26] = {false};

        for( char ch : s) {
            if(seen[ch - 'a']) {
                return ch;
            }
            seen[ch - 'a'] = true;
        }
        return 0;
    }
};