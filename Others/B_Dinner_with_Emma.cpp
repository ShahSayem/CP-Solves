#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, m, mn = INT_MAX, mx = INT_MIN, index, x;
    cin>>n>>m;

    vector < vector <int> > v(n*m);
    vector <int> vmn;
    for (int i = 0; i < n; i++){ //streets -> 1-n
        mn = INT_MAX;
        for (int j = 0; j < m; j++){   //avenue -> 1-m
            cin>>x;
            v[i].push_back(x);

            if (v[i][j] < mn)
                mn = v[i][j];
        }
        vmn.push_back(mn);
    }

    for (int i = 0; i < n; i++){
        if (vmn[i] > mx){
            mx = vmn[i];
            index = i;
        }
    }

    cout<<mx;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
