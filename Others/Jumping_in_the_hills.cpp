#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, u, d;
    cin>>n>>u>>d;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int idx = 1, parachute = 0;
    for (int i = 0; i < n-1; i++){
        if (v[i] == v[i+1]){
            idx++;
        }
        else if (v[i+1] > v[i]){
            if (v[i+1] <= (v[i]+u))
                idx++;
            else 
                break;
        }
        else if (v[i+1] < v[i]){
            if (v[i+1]+d >= (v[i]))
                idx++;
            else {
                if (!parachute){
                    idx++;
                    parachute = 1;
                }
                else
                    break;
            }    
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
