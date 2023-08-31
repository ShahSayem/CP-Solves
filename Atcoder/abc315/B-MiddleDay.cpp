#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


void solve()
{
    ll n, presum = 0, sum = 0, x;
    cin>>n;
	vector <int> v(n);
    for (int i = 0; i < n; ++i){
        cin>>v[i];

        sum += v[i];
    }

    int day = (sum+1)/2;
    sum = 0;
    for (int i = 0; i < n; ++i){
        sum += v[i];

        if (sum >= day){
            cout<<i+1<<" "<<day-presum;
            return;
        }

        presum += v[i];
    }
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}
