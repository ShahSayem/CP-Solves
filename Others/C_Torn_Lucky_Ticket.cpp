#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

int digitSum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++){
        sum += (s[i]-'0');
    }
    
    return sum;
}

void solve()
{
    int n;
    cin>>n;

    vector <string> v(n);
    map <int, int> mp[6];
    for (int i = 0; i < n; i++){
        cin>>v[i];
        mp[v[i].size()][digitSum(v[i])]++;
    }
    
    ll ans = 0;
    string curr;
    int sz, need, lSum, rSum;
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= v[i].size(); j++){
            sz = v[i].size() + j;

            if (sz & 1)
                continue;
            
            curr = v[i].substr(0, sz/2);
            lSum = digitSum(curr);
            curr = v[i].substr(sz/2, sz);
            rSum = digitSum(curr);
            need = lSum-rSum;

            if (need > 0)
                ans += mp[j][need];
            
            if (j == v[i].size())
                continue;

            reverse(v[i].begin(), v[i].end());
            curr = v[i].substr(0, sz/2);
            lSum = digitSum(curr);
            curr = v[i].substr(sz/2, sz);
            rSum = digitSum(curr);
            need = lSum-rSum;

            if (need > 0)
                ans += mp[j][need];
        }
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
