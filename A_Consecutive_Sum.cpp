#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector <ll> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int cnt = 0;
    for (int i = 0; i < n-k; i++){
        if (v[i] < v[i+k]){
            swap(v[i], v[i+k]);
            cnt++;

            // if (cnt == k)
            //     break;
        }
    }

    ll sum = 0, sumf = 0;
    for (int i = 0; i < n; i++){
        cnt = 0;
        for (int j = i; j < n; j++){
            sum += v[j];
            cnt++;

            if (cnt == k)
                break;
        }

        sumf = max(sum, sumf);
        sum = 0;
    }

    cout<<sumf;
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
