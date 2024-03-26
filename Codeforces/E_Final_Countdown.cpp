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

    string s;
    cin>>s;

    vector <ll> preSum(n, 0);
    string ans = "";

    for (int i = 0; i < n; i++){
        if (!i)
            preSum[i] += (s[i]-'0');
        else 
            preSum[i] += preSum[i-1] + (s[i]-'0');
    }

    ll curr;
    int carry = 0;
    for (int i = n-1; i > 0; i--){
        curr = preSum[i] + carry;

        if (!curr)
            break;

        ans += ((curr%10) + '0');
        carry = curr/10;
    }
    
    if (preSum[0]+carry){
        string x = to_string(preSum[0]+carry);
        reverse(x.begin(), x.end());
        ans += x;
    }
        

    reverse(ans.begin(), ans.end());
    cout<<ans;
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
