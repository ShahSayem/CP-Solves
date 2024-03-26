#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n, k, curr;
    cin>>n>>k;

    vector <int> v(n), a(n, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];  //a
    }


    for (int i = 0; i < n; i++){
        cin>>curr; //x

        if (curr < 0)
            a[abs(curr) - 1] += v[i];
        else 
            a[curr-1] += v[i];
    }


    curr = 0;
    for (int i = 0; i < n; i++){
        curr += k;

        if (curr < a[i]){
            cout<<"NO";
            return;
        }

        curr -= a[i];
    }
    
    cout<<"YES";
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
