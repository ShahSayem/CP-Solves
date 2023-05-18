#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int m, n, p;
    cin>>m>>n>>p;

    int step [m+1][n+1];
    int total = 0, mx = 0;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin>>step[i][j];
        }
    }
    
    vector <int> v[n+1], myStep;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            v[i].push_back(step[j][i]);

            if (j == p)
                myStep.push_back(step[j][i]);
        }
    }
    
    for (int i = 1; i <= n; i++){
        sort(v[i].rbegin(), v[i].rend());
        if (v[i][0] > myStep[i-1]){
            total += (v[i][0] - myStep[i-1]);
        }
    }

    cout<<total; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
