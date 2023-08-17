#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    string ans(string s){
        string x = "";
        int cnt = 0;
        for (int i = s.size()-1; i > -1; i--){
            if (s[i] != '#' && cnt == 0)
                x += s[i];
            else if (s[i] == '#')
                cnt++;
            else
                cnt--;
        }
        
        return x;
    }
    
    bool backspaceCompare(string s, string t) {
        return (ans(s) == ans(t));
    }
};