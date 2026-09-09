class Solution {
public:
// Suraj Mahato 2420497
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        int count = 0;

        // Suraj Mahato 2420497

        for(auto e : tasks)
        {
            mp[e]++;
            count = max(count, mp[e]);
        }
        
        // Suraj Mahato 2420497

        
        int ans = (count-1)*(n+1);
        for(auto e : mp) if(e.second == count) ans++;
        return max((int)tasks.size(), ans);

        // Suraj Mahato 2420497

    }
};