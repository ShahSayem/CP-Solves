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
    int n, k, cnt;
    cin>>n>>k;

    vector <int> v(n, 1);
    for (int i = 0; i < n; i++){
        v[i] = -1, cnt = 0;

        for (int j = 0; j < n; j++){
            for (int k = j+1; k < n; k++){
                if (v[j] == v[k])
                    cnt++;
            }
        }

        if (cnt == k){
            cout<<"YES\n";
            for (int i = 0; i < n; i++)
                cout<<v[i]<<" ";

            return;
        }
    }
    
    cout<<"NO";
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
