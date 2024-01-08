#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int a, b, cnt = 0, check = 0, mx = 0;
    cin>>a>>b;

    vector <char> v(a);
    for (int i = 0; i < a; i++){
        cin>>v[i];

        if (!check && v[i] == '*')
            cnt++, check = 1;

        if (check){
            if (v[i] == '*' && v[i-1] == v[i])
                cnt++;
            else {
                mx = max(cnt, mx);
                cnt = 0, check = 0;
            }
        }
    }
    
    mx = max(cnt, mx);
    if (mx >= b)
        cout<<"YES";
    else 
        cout<<"NO";
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
