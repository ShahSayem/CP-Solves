#include <iostream>
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
    int n;
    cin>>n;

    __int64_t mul = 1;
    ll x, check = 1e18;
    bool falg = false;
    for (int i = 0; i < n; i++){
        cin>>x;
        mul *= x;

        if (x == 0){
            cout<<0;
            return;
        }
        else if (mul > check){
            mul = -1;
            falg = true;
        }
    }
    
    if (falg)
        cout<<-1;
    else
        cout<<mul;
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
