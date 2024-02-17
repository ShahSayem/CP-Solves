#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string s;
    cin>>s;

    int n = s.size(), idxL = -1, idxR = -1, cnt = 0;
    bool start = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '1' && !start){
            idxL = i;
            start = 1;
        }
        else if (s[i] == '1'){
            idxR = i;
        }
    }
    
    for (int i = idxL; i <= idxR; i++){
        if (s[i] == '0')
            cnt++;
    }

    cout<<cnt;
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
