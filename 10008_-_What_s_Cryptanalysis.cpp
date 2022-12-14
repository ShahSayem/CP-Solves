#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, mx = 0;
    cin>>n;

    map <char, int> mp;
    string s;
    char c;
    while (n--){
        cin.ignore();
        getline(cin, s);

        for (int i = 0; i < s.size(); i++){
            c = toupper(s[i]);

            if ( c >= 'A' && c <= 'Z'){
                mp[c]++;
                mx = max(mx, mp[c]);
            }

        }
    }

    while (mx){
        for (auto x:mp){
            if (x.second == mx)
                    cout<<x.first<<" "<<x.second<<"\n";
        }
        mx--;
    }
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
