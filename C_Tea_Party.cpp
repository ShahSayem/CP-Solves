#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
bool check[105];

void solve()
{
    int n, w, mid, mx = 0;
    cin>>n>>w;

    vector <int> v(n), ans(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    for (int i = 0; i < n; i++){
        ans[i] = (v[i]+1)/2;

        w -= ((v[i]+1)/2);

        if (w < 0 ){
            cout<<-1;
            return;
        }
    }

    int add = 0, curr, idMAX = -1;

    if (w){
        add = w/n;
        for (int i = 0; i < n; i++){
            curr = min(v[i], ans[i]+add);
            w -= (curr-ans[i]);
            ans[i] = curr;
        } 

        if (w){
            for (int i = 0; i < n; i++){
                mx = 0;
                for (int j = 0; j < n; j++){
                    if (mx < v[j] && !check[j]){
                        mx = max(v[j], mx);
                        idMAX = j;
                    }
                }
                check[idMAX] = 1;

                curr = min(v[idMAX]-ans[idMAX], w);
                w -= curr;
                ans[idMAX] += curr;

                if (w == 0){
                    break;
                }
            }
        }
        
    }

    for (auto it : ans){
        cout<<it<<" ";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
