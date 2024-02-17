#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, mn = INT_MAX, idx = -1;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] < mn){
            mn = v[i];
            idx = i;
        }
    }
    
    for (int i = idx+1; i < n; i++){
        if (v[i] < v[i-1]){
            cout<<-1;
            return;
        }
    }

    cout<<idx;
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
