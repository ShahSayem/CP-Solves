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

void solve()
{
    int n;
    string s, ans = "";
    cin>>n>>s;

    int c = 0, v = 0;
    for (int i = n-1; i >= 0; i--){
        if (s[i] == 'a' || s[i] == 'e'){
            v++;

            if (v == 2){
                v = 1;
                c = 0;
                ans += '.';
            }

            ans += s[i];
        }
        else {
            c++;

            if (c == 2 && v == 1){
                if ((s[i+1] == 'b') || (s[i+1] == 'c') || (s[i+1] == 'd')){
                    ans += '.';
                    ans += s[i];
                    c = 1, v = 0;
                }
                else {
                    ans += s[i];
                    ans += '.';
                    c = 0, v = 0;
                }
            }
            else {
                ans += s[i];
            }
        }
    }
    
    int sz = ans.size();
    if (ans[sz-1] == '.'){
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());
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
