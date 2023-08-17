class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string min = *min_element(strs.begin(), strs.end());  
        string mx = *max_element(strs.begin(), strs.end()); 
        
        int i=0;
        int j=0;
        
        while(i<min.size() and min[i]==mx[j]) {  
            i++;
            j++;
        }
        
        return mx.substr(0,i);
    }
};