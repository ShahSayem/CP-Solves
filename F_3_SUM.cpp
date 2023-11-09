#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

void solve()
{
    int n, x;
    cin>>n;
    vector <int> v;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>x;

        x %= 10;
        if (mp[x] < 3){
            v.push_back(x);
            mp[x]++;
        }
    }

    int sz = v.size();
    for (int i = 0; i < sz-2; i++){
        for (int j = i+1; j < sz-1; j++){
            for (int k = j+1; k < sz; k++){
                if ((v[i]+v[j]+v[k])%10 == 3){
                    cout<<"YES";
                    return;
                }
            }
        }
    }

    cout<<"NO";   
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
