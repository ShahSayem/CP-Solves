#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n;
    cin>>n;
    // vector <int> v(n);

    ll sum1 = 0, sum2 = 0, x;
    for (int i = 0; i < n; i++){
        cin>>x;

        if (x > 0){
            sum1 += x;
        }
        else {
            sum2 += abs(x);
        }
    }
    
    cout<<max(sum1, sum2)-min(sum1, sum2);
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
