#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, curr;
    cin>>n;

    vector <int> v(2*n, 0), nums(2*n+1, 0);
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n; j++){
            cin>>curr;
            
            v[(i+1)+(j+1)-1] = curr;
            nums[curr]++;
        }
    }

    for (int i = 1; i<= 2*n; i++){
        if (!nums[i]){
            v[0] = i;
        }
    }

    for (auto it : v){
        cout<<it<<" ";
    }
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
