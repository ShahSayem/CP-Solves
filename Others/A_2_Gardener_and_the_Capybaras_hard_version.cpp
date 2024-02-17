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
    string s;
    cin>>s;

    int n = s.size();
    if (s[0] == s[n-1]){
        cout<<s[0]<<" ";
        for (int i = 1; i < n-1; i++){
            cout<<s[i];
        }
        cout<<" "<<s[n-1];
    }
    else if (s[0] == 'b'){
        if (s[1] == 'b'){
            cout<<s[0]<<" ";
            for (int i = 1; i < n-1; i++){
                cout<<s[i];
            }
            cout<<" "<<s[n-1];
        }
        else {
            cout<<s[0]<<" "<<s[1]<<" ";
            for (int i = 2; i < n; i++){
                cout<<s[i];
            }
        }
    }
    else {
        if (s[1] == 'a') {
            cout<<s[0]<<" "<<s[1]<<" ";
            for (int i = 2; i < n; i++){
                cout<<s[i];
            }
        }
        else {
            cout<<s[0]<<" ";
            for (int i = 1; i < n-1; i++){
                cout<<s[i];
            }
            cout<<" "<<s[n-1];
        }
    }
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
