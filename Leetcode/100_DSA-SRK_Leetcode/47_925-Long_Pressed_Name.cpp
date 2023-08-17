#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if (name.size() > typed.size())
            return false;
        
        int i = 0, j = 0;
        for (; i < typed.size(); i++){
            if (name[j] == typed[i]){
                j++;
            }
            else if (i > 0 && (typed[i] == typed[i-1])){
                continue;
            }
            else {
                return false;
            }
        }
        
        if (name[j] >= 'a' && name[j] <= 'z')
            return false;
        else
            return true;
    }
};