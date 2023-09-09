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
    string s;
    cin>>s;

    map <string, int> mp;
    mp["tourist"] = 3858;
    mp["ksun48"] = 3679;
    mp["Benq"] = 3658;
    mp["Um_nik"] = 3648;
    mp["apiad"] = 3638;
    mp["Stonefeang"] = 3630;
    mp["ecnerwala"] = 3613;
    mp["mnbvmar"] = 3555;
    mp["newbiedmy"] = 3516;
    mp["semiexp"] = 3481;

    cout<<mp[s];
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
