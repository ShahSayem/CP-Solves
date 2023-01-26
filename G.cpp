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
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);

    int n;
    cin>>n;

    vector <int> v;
    for (ll i = 2; i*i <= n; i++){
        while (n%i == 0){
            v.push_back(i);
            n /= i;
        }           
    }

    if (n>1)
        v.push_back(n); 

    if (v.size() == 3){
        set<ll>st;

        for(auto &it: v) 
            st.insert(it);

        if(st.size() == 3) 
            cout<<"YES";
        else 
            cout<<"NO";
    }
    else 
        cout<<"NO";
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
