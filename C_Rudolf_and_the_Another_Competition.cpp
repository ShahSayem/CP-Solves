#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, m, h, point, rank = 1; 
    ll penalty;
    cin>>n>>m>>h;

    vector <ll> t(m), preT(m);
    pair <int, ll> rudolf;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>t[j];
        }
        sort(t.begin(), t.end());

        preT[0] = t[0];
        for (int j = 1; j < m; j++){
            preT[j] = preT[j-1]+t[j];
        }

        penalty = 0, point = 0;
        for (int j = 0; j < m; j++){
            if (preT[j] <= h){
                penalty += preT[j];
                point++;
            }
            else{ 
                break;
            }    
        }

        if (i == 0){
            rudolf = {point, penalty};
        }

        if ((point == rudolf.first && (penalty < rudolf.second)) || (point > rudolf.first))
            rank++;
    }

    cout<<rank;
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
