#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, ans = 0;
    cin>>n;

    char grid [n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>grid[i][j];
        } 
    }

    for (int i = 0; i < n/2 ; i++){
        for (int j = 0; j < n/2; j++){
            vector <char> v({grid[i][j], grid[n-1-j][i], grid[n-1-i][n-1-j], grid[j][n-1-i]});

            char currMax = *max_element(v.begin(), v.end());
            for (auto ch : v){
                ans += (currMax-ch);
            }   
        } 
    }
    
    cout<<ans;
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
