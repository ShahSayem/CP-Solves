#include <bits/stdc++.h>
#include <iostream>
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

void solve()
{
    int n, cnt = 0;
    cin>>n;
    string s;
    cin>>s;

    bool start = 0, rightPar = 0;
    for (int i = 0; i < n; i++){
        if (rightPar == 0 && s[i] == ':'){
            start = 1;
        }
        else if (start == 1 && s[i] == ')'){
            rightPar = 1;
        }
        else if (rightPar && s[i] == ':'){
            cnt++;
            rightPar = 0;
        }
        else if (s[i] == '('){
            start = 0;
            rightPar = 0;
        }
    }
    
    cout<<cnt;
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
