#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

struct bitComp{
    bool operator()(const std::bitset<26>& lhs, const std::bitset<26>& rhs) const {
        return lhs.to_ulong() < rhs.to_ulong();
    }
};

int main()
{
    Shah_Sayem

    int n, sz;
    map< bitset <26>, int, bitComp> mp;
    ll ans = 0;
    cin >> n; 
    string s;
    for (int i = 0; i < n; i++){
        cin >> s;
        sz = s.size();

        bitset <26> temp(0);  //even or odd
        for (auto ch : s){
            if (temp[ch-'a'])
                temp[ch-'a'] = 0;
            else 
                temp[ch-'a'] = 1;
        }
        ans += mp[temp];
        // cout<<mp[temp]<<" ";

        for (char ch = 'a'; ch <= 'z'; ch++){
            if (temp[ch-'a'])
                temp[ch-'a'] = 0;
            else 
                temp[ch-'a'] = 1;

            ans += mp[temp];
            // cout<<mp[temp]<<" ";

            if (temp[ch-'a'])
                temp[ch-'a'] = 0;
            else 
                temp[ch-'a'] = 1;
        }
        mp[temp]++;
    }

    cout<<ans<<"\n";

    return 0;
}