#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
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
    int n, cnt1 = 0;
    cin>>n;

    ll sum = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        sum += v[i];

        if (v[i] == 1)
            cnt1++;
    }
    
    if ((n != 1 && cnt1 <= n/2) || (n != 1 && sum-(n-cnt1) >= cnt1*2)){
        cout<<"YES";
    }
    else {
        cout<<"NO";
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
