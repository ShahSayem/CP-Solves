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

int main()
{
    Shah_Sayem

    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);

    ll n, k, ans = 1;
    cin>>n>>k;

    if(n<=k){
        cout<<2<<"\n";
    }
    else if(n%k == 0){
        cout<<(n/k)*2<<"\n";
    }
    else{
        ll x = (n%k);
        ans += (n/k);
        x = k-x;
        n -= x;
        ans += (n/k)+(n%k!=0);
        cout<<ans<<"\n";
    }

    return 0;
}
