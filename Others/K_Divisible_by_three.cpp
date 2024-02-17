#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, val, cnt = 0;
    cin>>n;

    string s, curr;
    cin>>s;

    for (int i = 0; i < n; i++) {
        int num = 0;
        for (int j = i; j < n; j++) {
            num = ((num * 10) + (s[j] - '0')) % 3;
            if (num == 0) {
                cnt++;
            }
        }
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
