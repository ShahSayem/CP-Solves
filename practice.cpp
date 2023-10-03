#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector <int> v(n), vec(m);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());

    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += v[i];
    }

    if (k == 1){
        if (v[0] < vec[m-1]){
            cout<<sum-v[0]+vec[m-1];
        }
        else {
            cout<<sum;
        }
    }
    else if (k == 2){
        if (v[0] < vec[m-1]){
            sum = sum - v[0] + vec[m-1];
            sum = sum + vec[0] - max(vec[m-1], v[n-1]); 
        }
        else {
            sum = sum - v[n-1]+vec[0];
        }

        cout<<sum;
    }
    else {
        ll x = min(v[0], vec[0]);
        ll y = max(v[n-1], vec[m-1]);

        ll sum1 = 0;
        if (v[0] < vec[m-1]){
            sum = sum - v[0] + vec[m-1];
            sum1 = sum;
            sum = sum + x - y;
        }
        else {
            sum = sum - v[n-1] + vec[0];
        }

        if (k%2 == 1)
            cout<<sum1;
        else 
            cout<<sum;
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
