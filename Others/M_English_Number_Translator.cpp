#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve(string s)
{
    bool ok = true;
    int n = s.size(), sz;
    vector <string> v;
    string word;
    ll ans = 0;
    stringstream x(s);
    while (x >> word)
    {
        if(word == "negative")
        {
            ok = false;
        }
        else
        {
            v.push_back(word);
        }
    }

    map <string, ll> mp = {{"negative", -1}, {"zero", 0}, {"one", 1}, {"two", 2},{"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}, {"ten", 10},{"eleven", 11}, {"twelve", 12}, {"thirteen", 13}, {"fourteen", 14},
        {"fifteen", 15}, {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18}, {"nineteen", 19},
        {"twenty", 20}, {"thirty", 30}, {"forty", 40}, {"fifty", 50}, {"sixty", 60}, {"seventy", 70}, {"eighty", 80}, {"ninety", 90}, {"", 100},
        {"thousand", 1000}, {"million", 1000000}
    };

    ll m = v.size() - 1, curr = 0;
    for(int i = 0; i <= m; i++)
    {
        if (v[0] == "negative")
            continue;

        if(v[i] == "million"){
            if (curr = 0){
                curr = 1;
            }   

            curr *= 1000000; 
        }
        else if(v[i] == "thousand"){
            if (curr = 0){
                curr = 1;
            } 

            curr *= 1000;
        }
        else if(v[i] == "hundred"){
            if (curr = 0){
                curr = 1;
            } 

            curr *= 100;
        }
        else ans+=mp[v[i]];
        //ans+=mp[v[i]];
    }
    
    if(!ok)ans = -ans;
    cout<<ans<<"\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (getline(cin, s))
    {
        if(s == "-1")break;
        solve(s);
    }

    return 0;
}
