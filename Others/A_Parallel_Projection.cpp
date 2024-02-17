#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int w, d, h, a, b, f, g;
    cin>>w>>d>>h;
    cin>>a>>b>>f>>g;

    int l1 = h+b+g+abs(a-f);
    int l2 = h+(d-b)+(d-g)+abs(a-f);
    int l3 = h+a+f+abs(b-g);
    int l4 = h+(w-a)+(w-f)+abs(b-g);

    cout<<min({l1, l2, l3, l4});
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
