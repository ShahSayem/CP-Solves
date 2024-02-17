#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const ll MAX = 1e10+5;
int n, x;

bool isValid(vector <int> &v, ll mxHight)
{
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (v[i] < mxHight)
            sum += (mxHight-v[i]);

        if (sum > x)
            return false;
    }
    
    return true;
}

int mxHightFind(vector <int> &v)
{
    ll low = 0, high = MAX, mid;

    while (low <= high){
        mid = (low+high)/2;
        if(isValid(v, mid)){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    
    return high;
}

void solve()
{
    cin>>n>>x;

    vector <int> h(n);
    for (int i = 0; i < n; i++){
        cin>>h[i];
    }

    cout<<mxHightFind(h);
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
