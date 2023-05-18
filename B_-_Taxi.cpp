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
    int n, x;
    cin>>n;

    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>x;
        mp[x]++;
    }
    
    int sum = mp[4]+mp[3]+(mp[2]/2);
        mp[1] -= mp[3];
 
    if (mp[2]%2){
        sum += 1;
        mp[1] -= 2;
    }

    if (mp[1] > 0)
        sum += (mp[1]+3) / 4;
 
    cout<<sum;  
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
