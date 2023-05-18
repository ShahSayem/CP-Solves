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
    int a1, a2, a3, a4, ans, temp;
    cin>>a1>>a2>>a3>>a4;
    int sum = a1+a2+a3+a4;
    
    ans = a1;
    temp = min(a2, a3);
    if (a1){
        ans += 2*temp;
        a2 -= temp;
        a3 -= temp;
    }

    a2 = min(a2, a1);
    a3 = min(a3, a1);
    ans += (a2 + a3);

    temp = min({a4, a1-a2, a1-a3});

    ans += temp+1;
    cout<<min(ans, sum);
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
