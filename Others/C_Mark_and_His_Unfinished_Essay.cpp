#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve(){
    int n, c, q;
    cin>>n>>c>>q;

    string s;
    cin>>s;

    ll l, r, k;
    ll curr_len = n;

    vector < pair<ll, ll> > ops(c);
    vector < pair<ll, ll> > segs(c);

    for (int i = 0; i < c; i++){
        cin>>l>>r;

        ops[i] = {l, r};
        segs[i] = {curr_len+1, curr_len+(r-l+1)};
        curr_len = segs[i].second;
    }
    
    while (q--){
        cin>>k;

        if (k <= n){
            cout<<s[k-1]<<"\n";
        }
        else {
            for (int i = c-1; i > -1; i--){
                if (k >= segs[i].first && k <= segs[i].second)
                    k = (ops[i].first) + (k-segs[i].first);
            }
            cout<<s[k-1]<<"\n";
        }
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
    }

    return 0;
} 
  
