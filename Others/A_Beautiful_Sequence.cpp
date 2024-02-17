#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 10000000+5;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n+1);
    for (int i = 1; i <= n; i++){
        cin>>v[i];
    }

    for (int i = 1; i <= n; i++){
        if ((v[i] <= i)){
            cout<<"YES";
            return;
        }
    }
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
