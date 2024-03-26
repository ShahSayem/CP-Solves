#include <bits/stdc++.h>
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

void solve()
{
    string s;
    cin>>s;

    int n = s.size(), idx, l = 0, r = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '^'){
            idx = i;
        }
    }
    
    ll lSum = 0, rSum = 0;
    for (int i = idx-1; i >= 0; i--){
        if (s[i] >= '1' && s[i] <= '9'){
            lSum += ((idx-i) * (s[i]-'0'));
        }
    }

    for (int i = idx+1; i < n; i++){
        if (s[i] >= '1' && s[i] <= '9'){
            rSum += ((i-idx) * (s[i]-'0'));
        }
    }


    if (lSum == rSum){
        cout<<"balance";
    }
    else if (lSum < rSum){
        cout<<"right";
    }
    else {
        cout<<"left";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
