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
    int n;
    cin>>n;

    map < int, vector <int> > mpA, mpB;
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];

        mpA[a[i]].push_back(i);
    }
    
    for (int i = 0; i < n; i++){
        cin>>b[i];

        mpB[b[i]].push_back(i);
    }

    int ans = 0, curr = 0, idx  = -1;
    for (int i = 0; i < n; i++){
        if (!mpA[b[i]].empty()){
            idx = mpA[b[i]][0];
            curr = 1;
            ans = max(ans, curr);

            
        } 
    }
}

int main()
{
    Shah_Sayem

    int tc = 1, x = 1;
    cin>>tc;
    while (tc--){
        cout<<"Case "<<x++<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
