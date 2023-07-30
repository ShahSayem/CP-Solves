#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

 
int getLen(ll sz, vector <ll> &div)
{
    int x = 0, y = 0, ln = 1, ans = 1;
    for (int i = 1; i < sz; i++){
        if (div[i] == div[i-1]+1){
            ln++;
        }
        else {
            ans = max(ln, ans);
            ln = 0;
            x = i;
        }
    }
    ans = max(ln, ans);

    return ans;
}

void solve()
{
    ll n, N;
    cin>>n;
    string s = to_string(n);
    int sLen = s.size();

    if (sLen < 8)
        N = sqrtl(n);
    else
        N = 1e4+5;

    vector <ll> div;
    for (ll i = 1; i <= N; i++){
        if (n%i == 0){
            div.push_back(i);
            
            if (i != n/i)
                div.push_back(n/i);
        }
    }
    sort(div.begin(), div.end());

    int sz = div.size();
    ll len = getLen(sz, div);

    cout<<len;    
}

int main()
{
    Shah_Sayem

    int tc = 1, x = 20;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
