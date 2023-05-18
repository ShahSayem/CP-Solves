#include <iostream>
#include <bits/stdc++.h>
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
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};
bool freq[MAX];

void solve()
{
    memset(freq, 0, sizeof(freq));
    int n, m;
    cin>>n>>m;

    deque <int> dq;
    for (int i = 1; i <= n; i++){
        freq[i] = 1;

        dq.push_back(i);
    }
    
    int x;
    for (int i = 0; i < m; i++){
        cin>>x;

        if (freq[x]){
            swap(dq[0], dq[])
        }
        else {
            dq.push_front(x);
            dq.pop_back();

            auto y = dq.end();
            freq[dq.end()];
            freq[x] = 1;
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
