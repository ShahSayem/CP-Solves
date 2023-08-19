#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, cnt = 1;
    cin>>n;

    map <int, int> mp1, mp2;
    vector <int> a(n), b(n), c;
    for (int i = 0; i < n; i++){
        cin>>a[i];

        mp1[a[i]] = 1;
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];

        mp2[b[i]] = 1;
    }
    

    // if (n == 1){
    //     if (a[0] == b[0])
    //         cout<<2;
    //     else 
    //         cout<<1;

    //     return;
    // }

    for (int i = 0; i < n-1; i++){
        if (a[i] == a[i+1])
            cnt++;
        else  
            cnt = 1;

        mp1[a[i]] = max(cnt, mp1[a[i]]);
    }

    cnt = 1;
    for (int i = 0; i < n-1; i++){
        if (b[i] == b[i+1])
            cnt++;
        else 
            cnt = 1;

        mp2[b[i]] = max(cnt, mp2[b[i]]);
    }

    int ans = 1;
    for (int i = 0; i < n; i++){
        ans = max((mp1[a[i]] + mp2[a[i]]), ans);
    }
    for (int i = 0; i < n; i++){
        ans = max((mp1[b[i]] + mp2[b[i]]), ans);
    }
    
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
