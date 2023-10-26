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

    bool allOdd = 1, allEven = 1;
    ll sum = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sum += v[i];

        if (v[i] & 1)
            allEven = 0;
        else 
            allOdd = 0;
    }
    
    if (sum%n){
        cout<<"No";
    }
    else {
        if ((sum/n) & 1){
            if (allOdd){
                cout<<"Yes";
                return;
            }
        }
        else {
            if (allEven){
                cout<<"Yes";
                return;
            }
        }

        cout<<"No";
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
