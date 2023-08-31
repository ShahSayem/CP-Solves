#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
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
    bool start = 1;
    while(getline(cin, s)){
        int n = s.size();
        char ch;
        for (int i = 0; i < n; ++i){
            if (start && (s[i] >= 'A' && s[i] <= 'Z')){
                cout<<s[i];
                start = 0;
                continue;
            }

            if ((s[i] == '.' || s[i] == '!') || s[i] == '?'){
                start = 1;
            }

            if (s[i] >= 'A' && s[i] <= 'Z'){
                ch = s[i]+32;
                cout<<ch;
            }
            else {
                cout<<s[i];
            }
        }
        cout<<"\n";
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