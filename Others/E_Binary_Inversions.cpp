#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n;
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;
    cin>>n; 
    int idx1 = n, idx0 = n;

    vector <int> v(n+2);
    bool check = 0, falg = 0;
    int cntOne = 0, cntZero = 0;

    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (!falg && !v[i]){
            idx0 = i;
            falg = 1;
        }
        if (v[i]){
            idx1 = i;
            check = 1;
            cntOne++;
        }
        if (!v[i])
            cntZero++;

        if (check && !v[i])
            cnt1 += cntOne;
    }

    v[idx0] = 1;
    cntOne = 0;
    for (int i = 0; i < n; i++){
        if (v[i])
            cntOne++;
        if (!v[i])
            cnt2 += cntOne;
    }

    v[idx0] = 0;
    v[idx1] = 0;
    cntOne = 0;
    for (int i = 0; i < n; i++){
        if (v[i])
            cntOne++;
        if (!v[i])
            cnt3 += cntOne;
    }

    ll ans = max({cnt1, cnt2, cnt3});
    // cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<ans;
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
