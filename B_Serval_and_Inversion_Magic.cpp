#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, x = -1, y = -1;
    cin>>n;
    string s;
    cin>>s;

    for (int i = 0; i < n/2; i++){
        if (s[i] != s[n-i-1]){
            x = i+1;
            y = n-i-1-1;
            //cout<<x<<" "<<y;
            break;
        }
    }

    if (x == y){
        cout<<"Yes";
        return;
    }
    for (int i = x, j = y; i < n/2; i++, j--){
        if (s[i] != s[j]){
            cout<<"No";
            return;
        }
    }
    
    cout<<"Yes";
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
