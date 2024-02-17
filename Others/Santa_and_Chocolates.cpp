#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, k, sum = 0, avg, left;
    cin>>n>>k;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sum += v[i];
    }
    
    // avg = (sum/n);
    // left = sum - (avg*(n));

    if ((k == 0 && sum%n) || sum < n){
        cout<<"NO";
    }
    else {
        cout<<"YES";
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
