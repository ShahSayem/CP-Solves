#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m;
    cin>>n>>m;

    string s, t, temp;
    cin>>s>>t;

    bool check = 1;
    for (int i = 1; i < m; i++){
        if (t[i] == t[i-1]){
            check = 0;
            break;
        }
    }

    int j = 1, idx = -1;
    for (; j < s.size(); j++){
        if (s.size() > 1e4){
            cout<<"No";
            return;
        }

        if (s[j] == s[j-1]){
            if ((t[m-1] == s[j] || s[j-1] == t[0]) || !check){
                cout<<"No";
                return;
            }

            temp = s.substr(0, j) + t + s.substr(j);
            s = temp;
            //cout<<temp<<"\n";
        }
    }
    
    for (int i = 1; i < s.size(); i++){
        if (s[i] == s[i-1]){
            cout<<"No";
            return;
        }
    }
    
    cout<<"Yes";
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
