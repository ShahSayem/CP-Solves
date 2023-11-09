#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m;
    cin>>n>>m;

    vector <int> a(n), b(m);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    for (int i = 0; i < m; i++){
        cin>>b[i];
    }
    sort(b.rbegin(), b.rend());

    int idx = -1;
    for (int i = 0; i < m; i++){
        if (b[i] >= a[0]){
            idx = i;
        }
        else {
            break;
        }
    }

    for (int i = 0;idx != -1 && i <= idx; i++){
        cout<<b[i]<<" ";
    }
    idx++;

    int AIdx = n;
    for (int i = 0; i < n; i++){
        if (idx < m && a[i] < b[idx]){
            AIdx = i;
            break;
        }

        cout<<a[i]<<" ";
    }

    for (int i = idx; i < m; i++){
        cout<<b[i]<<" ";
    }  

    for (int i = AIdx; i < n; i++){
        cout<<a[i]<<" ";
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
