#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, k;
    cin>>n>>k;

    vector <int> v(n);
    for (int i = 0; i < n; i++)
        cin>>v[i];
    
    ll res = 0;
    if (k > 1){
        for (int i = 1; i < n-1; i++){
            if (v[i] > (v[i-1]+v[i+1]))
                res++;
        }
    }
    else
        res = (n-1)/2;

    cout<<res;
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
  
