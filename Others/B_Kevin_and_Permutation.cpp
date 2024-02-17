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

    if (n < 4){
        for (int i = 1; i <= n; i++){
            cout<<i<<" ";
        }
    }
    else if (n == 4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3;
    }

    else if (n%2){
        cout<<(n+1)/2<<" ";
        for (int i = 1; i <= n/2; i++){
            cout<<i<<" "<<i+(n+1)/2<<" ";
        }
    }
    else {
        for (int i = 1; i <= n/2; i++){
            cout<<i+(n+1)/2<<" "<<i<<" ";
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
        cout<<"\n";
    }

    return 0;
}
