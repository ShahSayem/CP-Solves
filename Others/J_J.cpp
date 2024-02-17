#include <bits/stdc++.h>
#include <iostream>
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

void solve(ll d)
{
    // ll d;
    // cin>>d;

    cout<<d<<": ";
    ll sum = 0;
    vector <ll> sumTilli(10001, 0);
    for (int i = 1; i <= 100; i++){
        sum += i;

        sumTilli[i] = sum;
    }
    

    vector < pair <int, int> > ans;
    for (int i = 1; i <= 10000; i++){
        for (int j = i+1; j <= 10000; j++){
            if (sumTilli[j]-sumTilli[i] == d){
                ans.push_back({i, j});
            }
        }
    }
    
    cout<<ans.size()<<"\n";
    for (auto &&i : ans){
        cout<<i.first<<" "<<i.second<<"\n";
    }  
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    int val = 1;
    while (tc--){
        solve(val++);
        cout<<"\n";
    }

    return 0;
}
