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
    int n;
    cin>>n;

    string x = to_string(n);
    int sz = x.size();
    for (int i = 0; i < x.size(); i++){
        if (((x[i]-'0')%2 == 0 || x.size() == 1) || x[sz-1] != '9'){
            cout<<n/2<<" "<<((n/2)+(n%2));

            return;
        }
    }
    
    cout<<(n/2)+5<<" "<<((n/2)+(n%2))-5;
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
