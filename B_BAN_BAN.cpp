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

    if (n == 1){
        cout<<1<<"\n";
        cout<<1<<" "<<2<<"\n";
    }
    else {
        cout<<(n+1)/2<<"\n";
        for (int i = 1, j = 3*n; i < j; i+=3, j-=3){
            cout<<i<<" "<<j<<"\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        // cout<<"\n";
    }

    return 0;
}
