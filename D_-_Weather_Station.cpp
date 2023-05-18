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

ll BinExpo(ll a,ll b)
{
    ll ans = 1;
    while(b){
        if(b&1){
            ans = (ans*a)%MOD;
            ans = (ans+MOD)%MOD;
        }
        
        a = (a*a)%MOD;
        a = (a+MOD)%MOD;

        b>>=1;
    }

    return (ans+MOD)%MOD;
}

void solve()
{
    ll ans, cnt = 0;
    string s;
    map <string,int> mp = {{"N", 1}, {"NE", 1}, {"E", 1}, {"SE", 1}, {"S", 1}, {"SW", 1}, {"W", 1}, {"NW", 1}};
    cin>>s;

    for(ll i = 0; i <(ll)s.size()-1; i++){
        if(mp[s.substr(i,2)] == 1) 
            ++cnt;

        cnt = ((cnt%MOD) + MOD) % MOD;
    }

    ans = BinExpo(2, cnt);
    cout<<(ans+MOD) % MOD<<endl;
}

int main()
{
    Shah_Sayem

    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
