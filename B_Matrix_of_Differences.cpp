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

    int  x = 1, y = n*n;
    vector <int> v;
    for (int i = 1; i <= n*n; i++){
        if (i%2){
            v.push_back(x);
            x++;
        }
        else {
            v.push_back(y);
            y--;
        }

        if (i%n == 0){
            if ((i/n)%2){
                for (auto z : v){
                    cout<<z<<" ";
                }
            }
            else {
                reverse(v.begin(), v.end());
                for (auto z : v){
                    cout<<z<<" ";
                }
            }

            cout<<"\n";
            v.clear();
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
    }

    return 0;
}
