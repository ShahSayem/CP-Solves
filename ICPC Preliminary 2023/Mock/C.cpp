#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{

    int n, l, r;
    cin>>n>>l>>r;
    
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }  
    
    sort(v.begin(), v.end());

    int ans = 0, up, low;
    for(int i = 0; i < n; i++){
        up = upper_bound(v.begin()+i+1, v.end(), r-v[i]) - v.begin();
        low = lower_bound(v.begin()+i+1, v.end(), l-v[i]) - v.begin();

        ans += (up - low);
    }

    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}