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
    int n;
    cin>>n;

    bool check = 0;
    vector <int> v(n+1), temp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i && v[i] != v[i-1]){
            check = 1;
        }
    }

    if (n == 1 || !check){
        cout<<0;

        return;
    }

    for (int i = 0; i < n/2; i++){
        temp.push_back(abs(v[i]-v[n-i-1]));
    }

    int x = temp[0];
    for (int i = 1; i < n/2; i++){
        x = __gcd(x, temp[i]);
    }

    cout<<x;
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
