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

    int n = s.size(), cnt = 0;
    for (int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1])
            cnt++;
    }

    if ((cnt == 1) || (n == 1) || (cnt == 0 && (n & 1))){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
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
