#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
#define error(x)        cerr << #x << " = " << (x) <<"\n";
#define Error(a,b)      cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n";
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
    string s;
    cin>>s;
    
    if (s[0] == '0'){
        cout<<0;
        return;
    }
    
    int n = s.size(), cnt = 0;
    bool check = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '?')
            check = 1;
    }
    if (!check && s[0] != '0'){
        cout<<1;
        return;
    }

    if (s[0] == '?'){
        cnt += 9;
    }
    for (int i = 1; i < n; i++){
        if (s[i] == '?' && s[0] == '?'){
            cnt*= 10;
        }
        else if (s[i] == '?' && s[0] != '?'){
            if (cnt == 0)
                cnt = 1;

            cnt*= 10;
        }
    }
    
    cout<<cnt;
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
