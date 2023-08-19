#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
template <typename T> using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    int n, k, mn = INT_MAX;
    cin>>n>>k;

    vector <int> v(n), x;
    for(int i=0; i<n; i++){
        cin>>v[i];

        mn = min(v[i], mn);
    }
    sort(v.begin(), v.end());

    if (k > n){
        cout<<0;
        return;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (v[i] >= k){
            cnt++;
            x.push_back(v[i]);
        }
    }
    
    mn = INT_MAX;
    for(int i=0; i<x.size(); i++){
        mn = min(mn, x[i]);
    }

    if (x.size() >= k){
        cout<<max(mn, cnt);
    }

    // cout<<cnt*(mn/k);
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
