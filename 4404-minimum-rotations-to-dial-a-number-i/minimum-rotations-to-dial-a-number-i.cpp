class Solution {
public:
    int minRotations(string s) {
        int ans = 0;
        int current = 0;

        for (char c : s) {
            int digit = c - '0';

            int diff = abs(current - digit);

            int rotations = min(diff, 10 - diff);

            ans += rotations;

            current = digit;
        }

        return ans;
    }
};