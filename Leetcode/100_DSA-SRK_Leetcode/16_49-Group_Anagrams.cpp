#include <bits/stdc++.h>
using namespace std;

vector<vector <string> > solve(vector <string> & strs){

    vector<vector <string> > ans;

    unordered_map <string, vector <string> > mp;

    string temp;
    for (int i = 0; i < strs.size(); i++){
        temp = strs[i];
        sort(strs[i].begin(), strs[i].end());
        mp[strs[i]].push_back(temp);
    }
    
    for (auto x:mp)
        ans.push_back(x.second);

    return ans;
}

int main()
{
    vector <string> strs;
    int n;
    string s;

    cin>>n;
    while (n--) {
        cin>>s;
        strs.push_back(s);
    }

    auto ans = solve(strs);

    for (auto x:ans){
        for (auto y:x)
            cout<<y<<" ";

        cout<<"\n";
    }
    
    return 0;
}