#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    string s;
    cin>>s;

    int x;
    for (int i = 0; i < n; i++){
        x = v[i];
        for (int j = 0; j < n; j++){
            if (v[j] == x){
                if (s[i] != s[j]){
                    cout<<"NO";
                    return;
                }
            }
        }
    }

    cout<<"YES";
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
