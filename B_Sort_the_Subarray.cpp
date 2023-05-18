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

    int check[n];
    
    vector <int> a(n), v(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];

        check[i] = 0;
    }
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    for (int i = 0; i < n; i++){
        if (v[i] <= v[i+1]){
            // check[i] += 1;
        }

        if (v[i] != a[i]){
            check[i] += 1;
        }
    }

    for (int i = 0; i < n; i++){
        if (check[i]){
            cout<<i+1<<" ";

            break;;
        }
    }
    for (int i = n-1; i >= 0; i--){
        if (check[i] == 0){
            cout<<i+1;
            break;
        }
    }

    // if (fl)
    //     cout<<n;
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
