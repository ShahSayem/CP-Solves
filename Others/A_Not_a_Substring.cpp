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

void solve()
{
    string s;
    cin>>s;

    if (s == "()"){
        cout<<"NO";
        return;
    }

    int n = s.size();
    bool check = 0;
    cout<<"YES\n";
    for (int i = 1; i < n; i++){
        if (s[i] == s[i-1]){
            check = 1;
            break;
        }
    }
    
    if (check){
        for (int i = 0; i < n; i++){
            cout<<"()";
        }
    }
    else {
        for (int i = 0; i < n; i++){
            cout<<"(";
        }
        for (int i = 0; i < n; i++){
            cout<<")";
        }
    }
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
