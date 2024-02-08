#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector <int> v(n), div;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    

    for (int i = 1; i*i <= n; i++){
        if (n%i == 0){
            div.push_back(i);

            if ((n/i) != i)
                div.push_back(n/i);
        }  
    }

    int gcd, ans = 0;
    for (auto curr : div){
        gcd = 0;
        for (int i = curr; i < n; i++){
            gcd = __gcd(gcd, abs(v[i]-v[i-curr]));
        }
        
        //cout<<curr<<" "<<gcd<<"\n";
        if (gcd != 1)
            ans++;
    }
    
    cout<<ans;
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
