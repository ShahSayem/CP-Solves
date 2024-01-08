#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    vector <int> v(3);
    for (int i = 0; i < 3; i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());

    int cnt = 0;
    for (int i = 0; i < 3; i++){
        if (v[i]){
            v[i]--;
            cnt++;
        }
        for (int j = i+1; j < 3; j++){
            if (v[i] && v[j]){
                v[i]--, v[j]--;
                cnt++;
            }
        }
    }

    cout<<cnt;
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
