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
    sort(b.begin(), b.end());

    int j = m-1;
    for (int i = 0; i < n; i++){
        while (j >= 0 && b[j] >= a[i]){
            cout<<b[j]<<" ";
            j--;
        }
        
        cout<<a[i]<<" ";
    }


    while (j >= 0){
        cout<<b[j]<<" ";
        j--;
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
