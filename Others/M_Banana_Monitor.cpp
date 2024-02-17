#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, xMax, a, c;
    cin>>n>>xMax>>a>>c;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    int cnt1 = 0, cnt2 = 0, start = 0, time = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > xMax){
            cnt1++;
        }

        if (cnt1 >= a){
            start = 1;
            time++;
            cnt2 = 0;
        }


        if (v[i] <= xMax){
            cnt2++;
        }

        if (cnt2 >= c){
            start = 0;
            cnt1 = 0;
        }
    }

    cout<<time;
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
