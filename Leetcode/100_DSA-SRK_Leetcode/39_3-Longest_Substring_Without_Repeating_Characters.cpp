class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (!s.size())
            return 0;
        
        vector <int> v(256, -1);
        int l = 0, r = 0, ans = 0;
        
        while (r < s.size()){
            if (v[s[r]] > -1)
                l = max(v[s[r]]+1, l);
            
            v[s[r]] = r;
            ans = max(ans, r-l+1);
            r++;
        }

        return ans;
    }
};