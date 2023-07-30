#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    Shah_Sayem

    int n;
    map<ll, int> cnt;
    ll ans = 0;
    cin >> n; 

    string s;
    ll mask = 0;
    int val;
    for (int i = 0; i < n; i++){
        cin >> s;
        mask = 0;
        for (auto c : s){
            val = c - 'a'; // [0,25]  a to z
            mask ^= (1 << val);
        }

        ans += cnt[mask];
        
        for (int flip = 0; flip < 26; flip++){
            mask ^= (1<<flip);
            ans += cnt[mask];
            mask ^= (1<<flip);
        }

        cnt[mask]++;
    }

    cout<<ans<<"\n";

    return 0;
}