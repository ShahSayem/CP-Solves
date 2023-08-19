#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, mx = 0, mn = INT_MAX, mxIdx, mnIdx;

    cin>>n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] > mx){
            mx = v[i];
            mxIdx = i;
        }

        if (v[i] < mn){
            mn = v[i];
            mnIdx = i;
        }
    }
    
    cout<<mnIdx+1<<" "<<mxIdx+1;
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
