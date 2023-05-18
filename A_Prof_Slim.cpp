#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve()
{
    vector <ll> v;
    ll n, cnt = 0;
    cin>>n;

    for (int i = 0; i < n; i++){
        ll j;
        cin>>j;
        v.push_back(j);

        if (j < 0){
            cnt++;
        }
    }
    
    int i;
    for (i = 0; i < cnt; i++){
        if (v[i] > 0){
            v[i] *= -1;
        }
    }

    for (; i < n; i++){
        if (v[i] < 0){
            v[i] *= -1;
        }
    }

    for (i = 0; i < n-1; i++){
        if (v[i] > v[i+1]){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<"\n";     
    }
    
    return 0;
}
    