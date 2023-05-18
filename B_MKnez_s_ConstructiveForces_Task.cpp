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
    
    if (n%2){
        if (n == 3)
            cout<<"NO";
        else {
            int x = n/2;
            int y = -(x-1);
            
            cout<<"YES\n";
            for (int i = 0; i < n; i++){
                if (i%2)
                    cout<<x<<" ";
                else 
                    cout<<y<<" ";
            } 
        }
    }
    else {
        cout<<"YES\n";
        for (int i = 0; i < n; i++){
            if (i%2)
                cout<<1<<" ";
            else 
                cout<<-1<<" ";
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
