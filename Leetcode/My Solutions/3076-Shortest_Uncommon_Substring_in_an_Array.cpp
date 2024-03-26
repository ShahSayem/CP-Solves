#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

static bool cmp(string &a, string &b)
{
    if (a.size() == b.size())
        return a < b;

    return a.size() < b.size();
}

map <string, int> mp;
vector <string> subStr(string &s)
{
    int n = s.size();

    vector <string> allSubStr;
    for (int i = 0; i < n; i++){
        string currSubStr = "";
        for (int j = i; j < n; j++){
            currSubStr += s[j];

            allSubStr.push_back(currSubStr);
        }
    }
    
    return allSubStr;
}

void solve()
{
    int n;
    cin>>n;

    vector <string> arr(n);
    for (auto &&i : arr){
        cin>>i;

        vector <string> curr = subStr(i);
        for (auto &&it : curr){
            mp[it]++;
        }
    }

    vector <string> ans;
    for (auto &&i : arr){
        vector <string> curr = subStr(i);
        sort(curr.begin(), curr.end(), cmp);
        for (auto &&it : curr){
            mp[it]--;
        }

        bool check = 0;
        for (auto &&it : curr){
            if (!mp[it]){
                ans.push_back(it);
                check = 1;
                break;
            }
        }

        if (!check)
            ans.push_back("");

        for (auto &&it : curr){
            mp[it]++;
        }
    }

    for (auto &&i : ans){
        cout<<i<<"\n";
    } 
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
