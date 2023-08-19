#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, idx = -1;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    if (v[0] == v[n-1]){
        cout<<-1;
    }
    else {
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (v[i] == v[n-1])
                cnt++;
        }  

        cout<<n-cnt<<" "<<cnt<<"\n";
        for (int i = 0; i < n; i++){
            if (v[i] != v[n-1])
                cout<<v[i]<<" ";
        }
        cout<<"\n";

        for (int i = 0; i < n; i++){
            if (v[i] == v[n-1])
                cout<<v[i]<<" ";
        }
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
