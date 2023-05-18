#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    int min1 = INT_MAX, min2 = INT_MAX;
    int ans = INT_MAX; 
    for (int i = 0; i < n-2; i++){
        for (int j = i+1; j < n-1; j++){
            for (int k = j+1; k < n; k++){
                    min1 = (v[j]-v[i]);
                    min2 = (v[k]-v[j]);
                    ans = min(ans, min1+min2);
            }
        }
    }
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
