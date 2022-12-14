#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    char c;
    vector <char> v[n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>c;
            v[i].push_back(c);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((v[i][j] == 'W' && v[j][i] != 'L') || (v[i][j] == 'L' && v[j][i] != 'W') || (v[i][j] == 'D' && v[j][i] != 'D')){
                cout<<"incorrect";
                return;
            }
        }
    }
    
    cout<<"correct";
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
