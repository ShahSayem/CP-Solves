#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

ll getSum(int w,ll c, vector <int> &sz){
    int n = sz.size();
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += ((1LL*sz[i]+2*w)*(1LL*sz[i]+2*w));

        if (sum > c)
            return sum;
    }
    
    return sum;
}

int valW(ll c, vector <int> &sz)
{
    ll l = 1, r = sqrtl(c)+2, mid, sum;
    while (l <= r){
        mid = l+(r-l)/2LL;
        sum = getSum(mid, c, sz);
        //cout<<l<<" "<<r<<" "<<mid<<"\n";

        if (sum == c){
            return mid;
        }
        else if (sum > c){
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
}

void solve()
{
    int n;
    ll c;
    cin>>n>>c;

    vector <int> sz(n);
    for (int i = 0; i < n; i++){
        cin>>sz[i];
    }
    
    cout<<valW(c, sz);
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
