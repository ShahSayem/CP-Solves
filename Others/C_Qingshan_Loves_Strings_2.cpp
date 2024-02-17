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

    string s, temp;
    cin>>s;

    int j = 0, idx = -1, sz = s.size();
    for (; j < sz; j++){
        if (s.size() > 1e3){
            cout<<"No";
            return;
        }

        if (s[j] == s[sz-j-1]){
            temp = s.substr(0, j) + "01" + s.substr(j);
            s = temp;
            //cout<<temp<<"\n";
        }

        sz = s.size();
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
