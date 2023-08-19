#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, x;
    cin>>n>>x;

    vector <int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }
    for (int i = 0; i < n; i++){
        cin>>c[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        if ((a[i] & x)+(a[i] ^ x) == x)
            ans |= a[i];
        else 
            break;
    }

    for (int i = 0; i < n; i++){
        if ((b[i] & x)+(b[i] ^ x) == x)
            ans |= b[i];
        else 
            break;
    }

    for (int i = 0; i < n; i++){
        if ((c[i] & x)+(c[i] ^ x) == x)
            ans |= c[i];
        else 
            break;
    }
    
    if (ans == x)
        cout<<"Yes";
    else
        cout<<"No";
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
