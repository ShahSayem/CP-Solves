#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

bool powerSet(vector <int> &v)
{
    int n = v.size(), x = 1;
    x = x<<n;

    ll sum = 0;
    int curr;
    for (int i = 0; i < x; i++){
        curr = i;
        sum = 0;
        for (int j = 0; j < n; j++){
            if (curr & (1<<j)){
                sum += v[j];
            }
            else {
                sum -= v[j];
            }
        }
        
        //cout<<i<<": "<<sum<<"\n";
        if (sum%360 == 0)
            return true;
    }
    
    return false;
}

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    if (powerSet(v))
        cout<<"YES";
    else 
        cout<<"NO";
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
