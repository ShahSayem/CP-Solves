#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    vector <char> v[8];
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            char c;
            cin>>c;
            v[i].push_back(c);
        }
    }
    
    bool row = true;
    for (int i = 0; i < 8; i++){
        row = true;
        for (int j = 0; j < 7; j++){
            if (v[i][j] != v[i][j+1]){
                row = false;
                break;
            }

            if (row && j == 6 && v[i][j] == 'R'){
                cout<<"R";
                return;
            }
        }
    }

    cout<<"B";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
