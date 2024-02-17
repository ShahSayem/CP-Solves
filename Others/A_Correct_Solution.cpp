#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    string n, m, x;
    cin>>n>>m;

    x = n;
    sort(x.begin(), x.end());

    if (n.size() == 1){
        if (n == m){
            cout<<"OK";
        }
        else {
            cout<<"WRONG_ANSWER";
        }

        return;
    }
    
    if (m == x){
        if (m[0] != '0'){
            cout<<"OK";
        }
        else {
            cout<<"WRONG_ANSWER";
        }

        return;
    }

    ll  mn = INT_MAX;
    for (int i = 0; i < n.size(); i++){
        if (x[i] != '0'){
            swap(x[i], x[0]);

            if (m == x){
                if (m[0] != '0'){
                    cout<<"OK";
                    return;
                }
            }

            else {
                cout<<"WRONG_ANSWER";
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
