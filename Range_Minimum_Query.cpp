#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
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

    int sz = sqrt(n)+1;
    int arr[n], SQ[sz];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < sz; i++){
        SQ[i] = INT_MAX;
    }

    for (int i = 0; i < n; i++){
        SQ[i/sz] = min(SQ[i/sz], arr[i]);
    }

    int q, l, r, mn = INT_MAX;
    cin>>q;
    while (q--){
        cin>>l>>r;

        for (int i = l; i <= r;){
            if ((i%sz == 0) && (i+sz-1 <= r)){
                mn = min(SQ[i/sz], mn);

                i += sz;
            }
            else {
                mn = min(arr[i], mn);
                i++;
            }
        } 

        cout<<mn<<"\n";   

        mn = INT_MAX;
    }   
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
