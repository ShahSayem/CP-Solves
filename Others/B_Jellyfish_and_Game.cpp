#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector <int> v(n), vec(m);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < m; i++){
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());

    ll sum = 0;
    if (k > 2){
        if (k & 1)
            k = 1;
        else 
            k = 2;
    }

    for (int i = 0; i < k; i++){
        if (i & 1){
            if (vec[0] < v[n-1])
                swap(vec[0], v[n-1]);
        }
        else {
            if (v[0] < vec[m-1])
                swap(v[0], vec[m-1]);
        }   

        sort(v.begin(), v.end());
        sort(vec.begin(), vec.end());  

        sum = 0;
        for (auto it : v){
            //cout<<it<<" ";
            sum += it;
        }
    }
    
    cout<<sum;
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
