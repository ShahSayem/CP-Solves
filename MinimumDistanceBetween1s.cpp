#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n;
    cin>>n;
    int x, y, ans = n+1;
    string s;
    cin>>s;

    bool check = true;
    for (int i = 0; i < n; i++){
        if (s[i] == '1' && check){
            x = i;
            check = false;
        }
        else if (s[i] == '1'){
            y = i;
            ans = min(ans, (y-x));
            x = y;

            if (ans%3 == 0){
                cout<<1;
                return;
            }
        }
    }
    
    if (ans == 1){
        cout<<1;
    }
    else {
        cout<<2;
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
