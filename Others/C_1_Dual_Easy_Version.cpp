#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

void solve()
{
    int n, mid;
    cin>>n;

    bool isSorted = 1;
    vector <int> v(n), idx, temp;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (i && v[i] < v[i-1]){
            isSorted = 0;
            idx.push_back(i);
        }
    }
    temp = v;
    sort(temp.begin(), temp.end());
    mid = temp[(n+1)/2];

    if (isSorted){
        cout<<0;
        return;
    }

    int cnt = 0, x = 0, y = 1, mx, mn;
    vector < pair <int, int> > op; 
    while (y < n){
        if (v[x] <= v[y]){
            x++, y++;
        }
        else {
            mx = *max_element(v.begin(), v.end());
            mn = *min_element(v.begin(), v.end());

            while (v[x] > v[y]){
                cnt++;

                if (mx > 0){
                    v[y] += mx;
                }
            }
            
        }
    }
    
    
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
