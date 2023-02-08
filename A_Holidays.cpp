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

void solve()
{
    int n, ans;
    cin>>n;

    ans = (n/7)*2;

    if (n%7 == 0){
        cout<<ans<<" "<<ans;
    }
    else {
        if (n%7 == 6){
            cout<<ans+1<<" "<<ans+2;
        }
        else {
            cout<<ans<<" ";

            if (n%7 <= 2)
                cout<<ans+(n%7);
            else if (n%7 > 2)
                cout<<ans+2;
            else 
                cout<<ans;
        }
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
