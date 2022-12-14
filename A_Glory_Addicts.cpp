#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, cnt1 = 0, cnt0 = 0;
    cin>>n;

    vector <pair <int, int>> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].second;

        if (v[i].second == 1)
            cnt1++;
        else 
            cnt0++;
    }

    for (int i = 0; i < n; i++){
        cin>>v[i].first;
    }

    sort(v.begin(), v.end());

    ll max_damage = 0;
    if (cnt1 == cnt0){
        max_damage = v[0].first;
        for (int i = 1; i < n; i++){
            max_damage += (v[i].first*2);
        }
    }
    else if (cnt0 == 0 || cnt1 == 0){
        for (int i = 0; i < n; i++){
            max_damage += v[i].first;
        }
    }
    else if (max(cnt0, cnt1) == cnt1){
        max_damage = v[cnt0].first;
        int x = cnt0;
        for (int i = 1; i < n; i++){
            if (x > 0){
                max_damage += (2*v[x-1].first);
                x--;
            }

            if (n >= cnt0 && x >= 0){
                max_damage += (2*v[n-1].first);  
                n--;             
            }
            else {
                if (n > cnt0){
                    max_damage += v[n-1].first;  
                    n--; 
                }
            }
        }
    }
    // else if (){

    // }

    cout<<max_damage;
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
