#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    int h, w, n;
    cin>>h>>w>>n;

    vector <int> v(n);
    map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    int curr = 0;
    for (int i = 0; i < n; i++){
        curr += v[i];

        if (curr == w){
            h--;
            curr = 0;
        }
        
        if (h == 0){
            cout<<"YES";
            return;
        }
    }

    cout<<"NO";
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
