#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, m, x, y;
    cin>>n;

    vector <int> birds(n);
    for (int i = 0; i < n; i++){
        cin>>birds[i];
    }    

    cin>>m;
    while (m--){
        cin>>x>>y;
        x--, y--;

        if (x > 0 && x < n-1){
            birds[x-1] += (y);
            birds[x+1] += (birds[x]-y-1);
            birds[x] = 0;
        }
        else if (x == 0){
            birds[x+1] += (birds[x]-y-1);
            birds[x] = 0;
        }
        else {
            birds[x-1] += (y);
            birds[x] = 0;
        }
    }
    
    for (int i = 0; i < n; i++){
        cout<<birds[i]<<"\n";
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
