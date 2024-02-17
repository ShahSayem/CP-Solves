#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n), ans(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    vector < pair <int, int> > points;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if (v[i] == v[j]){
                points.push_back({i, j});
            }
        }
    }

    for (int i = 0; i < points.size(); i++){
        for (int j = i+1; j < points.size(); j++){
            ans[points[i].first] = 1;
            ans[points[i].second] = 2;

            ans[points[j].first] = 1;
            ans[points[j].second] = 3;

            if (v[points[i].second] != v[points[j].second]){
                for (int k = 0; k < n; k++)
                    ans[k] = 1;

                ans[points[i].first] = 1;
                ans[points[i].second] = 2;

                ans[points[j].first] = 1;
                ans[points[j].second] = 3;

                for (auto it : ans){
                    cout<<it<<" ";
                }
                return;
            }
        }
    }
    
    cout<<-1;
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
