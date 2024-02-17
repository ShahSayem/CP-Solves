#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;


void solve()
{
    int n, check = 0;
    cin>>n;

    int twoP = n, l = n, r = n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i && (v[i] != v[i-1]))
            check = 1;
    }

    if (!check){
        cout<<0;
        return;
    }

    int idx1 = n, idx2 = n;
    for (int i = 1; i < n; i++){
        if (v[i] != v[i-1]){
            l = n-i;
            idx1 = i;
            break;
        }
    }

    for (int i = n-1; i > 0; i--){
        if (v[i] != v[i-1]){
            r = i;

            idx2 = i;
            break;
        }
    }


//twoP
    for (int i = 1; i < n; i++){
        if (v[i] != v[0]){
            idx1 = i;
            break;
        }
    }

    for (int i = n-2; i >= 0; i--){
        if (v[i] != v[n-1]){
            idx2 = i;
            break;
        }
    }

    if (v[0] == v[n-1])
        twoP = abs(idx2-idx1)+1;
    else 
        twoP = n-1;

    cout<<min({l, r, twoP});
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
