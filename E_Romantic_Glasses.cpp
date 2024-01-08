#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, check = 0;
    cin>>n;

    ll curr = 0, even = 0, odd = 0;
    map <ll, int> mp;
    vector <ll> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i == 0){
            even = v[i];
        }
        else {
            if (i & 1){
                odd += v[i];
            }
            else {
                even += v[i];
            }
        }

        if (i && (v[i] == v[i-1]))
            check = 1;

        curr = even-odd;

        if ((curr == 0) || mp[curr]){
            check = 1;
        }

        mp[curr]++;
    }

    if (check){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
