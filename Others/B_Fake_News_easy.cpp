#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
bool check[5];

void solve()
{
    string s, fake = "heidi";
    cin>>s;

    int n = s.size(), idx = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == fake[idx] && !check[idx]){
            check[idx] = 1;
            idx++;
        }

        if(idx > 4){
            cout<<"YES";
            return;
        }
    }
    
    cout<<"NO";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
