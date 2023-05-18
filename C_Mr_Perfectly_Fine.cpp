#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
#define error(x)        cerr << #x << " = " << (x) <<"\n";
#define Error(a,b)      cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n";
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, m;
    cin>>n;

    string s;
    vector <int> v(n), a, b, c;
    for (int i = 0; i < n; i++){
        cin>>m;
        cin>>s;

        if (s == "11")
            c.push_back(m);
        else if (s == "10")
            a.push_back(m);
        else if (s == "01")
            b.push_back(m);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    int x, y, z, ans = INT_MAX;

    if (!a.empty() && !b.empty())
        ans = a[0]+b[0];

    if (!c.empty())
        ans = min(ans, c[0]);

    if (ans == INT_MAX)
        cout<<-1;
    else    
        cout<<ans;
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
