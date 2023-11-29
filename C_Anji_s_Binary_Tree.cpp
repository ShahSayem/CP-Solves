#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 3e5+2;

vector < pair <int, int> > v(MAX);
string s;

int mnStep(int idx)
{
    int l = v[idx].first, r = v[idx].second;
    if (l == 0 && r == 0)
        return 0;

    int curr = INT_MAX, x = 0;
    if (l){
        if (s[idx] != 'L')
            x = 1;

        curr = x + mnStep(l);
    }

    if (r){
        x = 0;
        if (s[idx] != 'R')
            x = 1;

        curr = min(x + mnStep(r), curr);
    }

    return curr;
}

void solve()
{
    int n;
    cin>>n;
    cin>>s;

    s = 'x'+s;
    for (int i = 1; i <= n; i++){
        cin>>v[i].first>>v[i].second;
    }
    
    cout<<mnStep(1);
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