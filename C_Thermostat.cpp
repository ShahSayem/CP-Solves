#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    ll l, r, x, a, b;
    cin>>l>>r>>x;
    cin>>a>>b;

    if (a == b)
        cout<<0;
    else if (abs(a-b) >= x)
        cout<<1;
    else if ((abs(a-l) >= x && abs(b-l) >= x) || (abs(r-a) >= x && abs(r-b) >= x))
        cout<<2;
    else if ((abs(r-a) >= x && abs(b-l) >= x) || (abs(a-l) >= x && abs(r-b) >= x))
        cout<<3;
    else 
        cout<<-1;
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
