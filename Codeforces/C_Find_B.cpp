#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, q, l, r;
    cin>>n>>q;

    vector <ll> preSum(n);
    vector <int> v(n), cnt1(n, 0);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (!i){
            if (v[i] == 1)
                cnt1[i] = 1;

            preSum[i] = v[i];
        }
        else {
            if (v[i] == 1)
                cnt1[i] = cnt1[i-1] + 1;
            else
                cnt1[i] = cnt1[i-1];

            preSum[i] = preSum[i-1] + v[i];
        }
    }

    ll curr1, currSum, currSZ;
    while (q--){
        cin>>l>>r;
        l--, r--;

        currSZ = r-l+1;
        curr1 = cnt1[r];
        currSum = preSum[r];

        if (l){
            currSum -= preSum[l-1];
            curr1	-= cnt1[l-1];
        }

        if ((currSum-(currSZ-curr1) >= (curr1*2)) && currSZ != 1){
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
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
        //cout<<"\n";
    }

    return 0;
}
