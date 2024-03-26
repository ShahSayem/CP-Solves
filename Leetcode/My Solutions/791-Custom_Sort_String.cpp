#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        int n = s.size(), m = order.size();
        vector <int> mp(26, 0);
        for(int i = 0; i < n; i++){
           mp[s[i]-'a']++;
        }

        int curr, check;
        for(int i = 0; i < m; i++){
            check = 0;
            curr = mp[order[i]-'a'];
            while(curr--){
                check = 1;
                ans += order[i];
            }

            mp[order[i]-'a'] = 0;
        }

        for(auto it: s){
            if (mp[it-'a'])
                ans += it;
        }

        return ans;
    }
};