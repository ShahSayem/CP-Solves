#include <iostream>
#include <map>
#include <vector>
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
    int n, k, mx = 0, x;
    cin>>n>>k;

    vector <int> v(n);
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mx = max(v[i], mx);
    }

    for (int i = 0; i < n; i++){
        if (mx == v[i]){
            mp[i+1]++;
        }
    }

    for (int i = 0; i < k; i++){
        cin>>x;

        if (mp[x]){
            cout<<"Yes";
            return;
        }
    }
    
    cout<<"No";
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

