#include <bits/stdc++.h>
#include <iostream>
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

void solve()
{
    int a[3], b[3];
    for (int i = 0; i < 3; i++){
        cin>>a[i];
    }
    sort(a, a+3);
    for (int i = 0; i < 3; i++){
        cin>>b[i];
    }
    sort(b, b+3);

    int alice = a[1]+a[2];
    int bob = b[1]+b[2];

    if (alice > bob)
        cout<<"Alice";
    else if (bob > alice)
        cout<<"Bob";
    else
        cout<<"Tie";
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
