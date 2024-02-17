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
    int n;
    cin>>n;
    string s, x = "FBFFBFFBFB";
    cin>>s;

    if (n == 1 && (s == "F" || s == "B") ){
        cout<<"YES";
        return;
    }

    ll cnt = 0;

    if (s[0] == 'B')
    for (int i = 0; i < n-1; i++){
        if (s[i] == 'F' && s[i+1] == 'F'){
            if (i+2 < n && s[i+2] == 'F'){
                cout<<"NO";
                return;
            }
        }

        if (s[i] == 'B' && s[i+1] == 'B'){
                cout<<"NO";
                return;
        }
    }
    
    cout<<"YES";
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
