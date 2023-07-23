#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    string a, b;
    cin>>a>>b;

    int n = a.size(), m = b.size();
    int temp, cnt = 0;
    ll ans = 0;

    bool check = 0;
    int pos = m-n, i;
    for (i = 0; i < pos; i++){
        if (!check){
            ans += (b[i]-'0');
            check = 1;
        }    
        else {
            ans += 9;
        }
    }
    
    int j = 0;
    if (!check){
        for (; i < m; i++, j++){
            if (b[i] != a[j]){
                break;
            }
        }
    
        if (n == m && i != n){
            ans += abs(int(b[i]-'0') - int(a[j]-'0'));
            i++, j++;
        }
    }

    ans+= 1LL*((n-j)*9); 
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
