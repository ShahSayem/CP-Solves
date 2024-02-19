#include <bits/stdc++.h>
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
    int n, cnt1 = 0, cnt2 = 0, idx = -1;
    cin>>n;

    bool check = 0;
    vector <string> v(n);
    for (int i = 0; i < n; i++){
         cin>>v[i];

        if (!check){
            for (auto &&it : v[i]){
                if (it == '1'){
                    cnt1++;

                    check = 1;
                    idx = i;
                }   
            }
        }
        else if (i == idx+1 && check){
            for (auto &&it : v[i]){
                if (it == '1')
                    cnt2++;
            }
        }
    }
    
    if (cnt1 == cnt2)
        cout<<"SQUARE";
    else 
        cout<<"TRIANGLE";
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
