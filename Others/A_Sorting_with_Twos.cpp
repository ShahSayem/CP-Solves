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

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int x = 3e3+5, idx, target;
    while (x--){
        if (is_sorted(v.begin(), v.end())){
            cout<<"YES";
            return;
        }

        for (int i = n-1; i > 0; i--){
            if (v[i] < v[i-1]){
                idx = i;
                break;
            }
        }
        
        int mx = 0;
        for (int i = 1; i <= 32; i*= 2){
            if (i >= idx){
                idx = i;
                break;
            }
        }
        
        for (int i = 0; i < min(n, idx); i++){
            v[i] -= 1;
        }
    }
    
    cout<<"NO";
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