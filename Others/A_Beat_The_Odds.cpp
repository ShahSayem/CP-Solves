#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;

    vector <ll> v;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;

        v.push_back(j);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++){
        if (v[i]%2)
            odd++;
        else    
            even++;
    }

    cout<<min(odd, even);
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