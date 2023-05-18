#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, m;
    cin>>n>>m;

    int iMN = n, iMX = 0, jMN = m, jMX = 0, cnt = 0;

    char paper[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>paper[i][j];

            if (paper[i][j] == 'B'){
                cnt++;

                iMN = min(iMN, i);
                iMX = max(iMX, i);
                jMN = min(jMN, j);
                jMX = max(jMX, j);
            }
        }
    }
    int len = max((iMX-iMN+1), (jMX-jMN+1));

    if (cnt == 0 || len < 1){
        cout<<1;
        return;
    }
    else {
        if (len > n || len > m){
            cout<<-1;
        }
        else {
            if (cnt == 1)
                cout<<0;
            else
                cout<<len*len-cnt;
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
