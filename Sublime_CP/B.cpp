#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int n, m, c, t;
    cin>>n>>m;
                //cnt   time
    vector < pair <int, int> > v(n);
    for (int i = 0; i < n; i++){
        cin>>c>>t;
        v[i] = {c, t};
    }
    
              //time
    vector <ll> preSum(n);
    preSum[0] = (v[0].first*v[0].second*1LL);
    for (int i = 1; i < n; i++){
        preSum[i] = preSum[i-1] + (v[i].first*v[i].second*1LL);
    }

    ll time, idx;
    while (m--){
        cin>>time;
        idx = lower_bound(preSum.begin(), preSum.end(), time)-preSum.begin();

        if (preSum[idx] >= time){
            cout<<idx+1<<"\n";
        }
    }
    
    return 0;
}