#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 998244353;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int GCD, LCM, cnt = 0;
    for (int i = 1; i <= 2940; i++){
        for (int j = 1; j <= 2940; j++){
            GCD = __gcd(i, j);
            LCM = (i*j)/GCD;

            //cout<<GCD<<" "<<LCM<<"\n";
            if (GCD == 21 && LCM == 2940){
                cnt++;
                cout<<i<<" "<<j<<"\n";
            }
        } 
    }
    
    //cout<<cnt;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
