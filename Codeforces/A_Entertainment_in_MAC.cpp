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
    int n, sz;
    cin>>n;

    string s, rev, curr;
    cin>>s;
    sz = s.size();

    if (sz == 1){
        cout<<s;
        return;
    }
    
    rev = s;
    reverse(rev.begin(), rev.end());

    for (int i = 0; i < (sz/2); i++){
        if ((s[i] < s[sz-i-1]) || s == rev){
            cout<<s;
            return;
        }
        else if (s[i] > s[sz-i-1]){
            curr = rev;
            curr += s;
            n-=2;
            cout<<curr;
            return;
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
