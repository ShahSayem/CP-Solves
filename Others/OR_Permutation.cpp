#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    int temp = n;
    vector <int> v(n, 1);
    for (int i = 0; i < n; i++){
        v[i] = temp;
        temp--;
    }
    
    for (int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }

    // for (int i = 2; i < n; i++){
    //     cout<<v[i]<<": "<<(v[i-1] | v[i-2])<<"\n";
    // }
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
