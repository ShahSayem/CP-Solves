#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int x, y;
    cin>>x>>y;

    int dist = (x + y)/2, curr1, curr2;
    for (int i = 0; i <= 102; i++){
        for (int j = 0; j <= 102; j++){
            curr1 = i + j;
            curr2 = abs(i - x) + abs(j - y);
            if (curr1 == dist && curr2 == dist){
                cout<<i<<" "<<j;
                return;
            }
        }
    }
    
    cout<<-1<<" "<<-1;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
