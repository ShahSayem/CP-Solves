#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, ans = 0, prev = -1;
    cin>>n;
    string s;
    cin>>s;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (s[i] == '1'){
            if (prev > v[i]){
                ans += prev;
                prev = v[i];
            }
            else {
                ans += v[i];
            }
        }
        else
            prev = v[i];
    }  
 
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}

