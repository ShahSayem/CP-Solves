#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, mn = INT_MAX;
    cin>>n;

    bool odd = 0, even = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mn = min(v[i], mn);

        if (v[i]%2)
            odd = 1;
        else 
            even = 1;
    }
    
    if ((even == 0 || odd == 0) || mn%2)
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
