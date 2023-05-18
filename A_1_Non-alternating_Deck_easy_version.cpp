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
    int n, alice = 0, bob = 0;
    cin>>n;

    int cnt = 1, total = n-1, i = 1;
    alice = 1;
    while (total){
        cnt++;
        if (i%2){
            if (total < cnt){
                bob += total;
                total = 0;
                break;
            }
            bob += cnt;
            total -= cnt;
            
            cnt++;
            if (total < cnt){
                bob += total;
                total = 0;
                break;
            }
            bob += cnt;
            total -= cnt;
        }
        else {
            if (total < cnt){
                alice += total;
                total = 0;
                break;
            }
            alice += cnt;
            total -= cnt;

            cnt++;
            if (total < cnt){
                alice += total;
                total = 0;
                break;
            }
            alice += cnt;
            total -= cnt;
        }

        // if (total-1 < cnt){
        //     alice += total;
        //     total = 0;
        //     break;
        // }

        i++;
    }
    
    cout<<alice<<" "<<bob;
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
