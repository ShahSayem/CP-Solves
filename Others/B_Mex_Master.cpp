#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, cnt0 = 0, cntG = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] == 0)
            cnt0++;
        if (v[i] > 1)
            cntG++;
    }
    
    if ((n+1)/2 >= cnt0){
        cout<<0;
    }
    else if (cntG || cnt0 == n){
        cout<<1;
    }
    else{
        cout<<2;
    }
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
