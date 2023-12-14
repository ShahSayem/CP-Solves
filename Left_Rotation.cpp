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
    int n, k;
    cin>>n>>k;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int x, cnt = 0;
    // if (k == n)
    //     x = 0;
    // else 
    //     x = k;

    for (int i = k; cnt < n; i++){
        if (i == n)
            i = 0;

        cout<<v[i]<<" ";
        cnt++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
