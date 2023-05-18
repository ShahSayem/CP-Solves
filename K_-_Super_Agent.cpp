#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    char pass[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin>>pass[i][j];
        }
    }

    if ((pass[0][0] != pass[2][2]) || (pass[2][0] != pass[0][2]) || (pass[0][1] != pass[2][1] || (pass[1][0] != pass[1][2]))){
        cout<<"NO";
        return;
    }
    
    cout<<"YES";
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
