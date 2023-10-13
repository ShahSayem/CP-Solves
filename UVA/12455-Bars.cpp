#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 20+5;

bool powerSet(vector <int> &v, int length)
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

            if (sum > length){
                break;
            }
        }
        
        if (sum == length){
            return true;
        }
    }
    
    return false;
}

void solve()
{
    int n, p;
    cin>>n>>p;

    vector <int> v(p);
    for (int i = 0; i < p; i++){
        cin>>v[i];
    }
    
    if (powerSet(v, n)){
        cout<<"YES";
    }
    else {
        cout<<"NO";
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
