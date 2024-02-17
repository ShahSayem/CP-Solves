#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int cnt, curr, ans = INT_MAX, start;
    for (int i = 1; i <= 1000; i++){  //All possibe solution
        cnt = 0, curr = i;
        for (int j = 0; j < n; j++){
            if (v[j] != curr){
                cnt++;
            }

            curr += k;
        }
        
        if (cnt < ans){
            start = i;
            ans = cnt;
        }
    }
    
    cout<<ans<<"\n";

    curr = start;
    for (int i = 0; i < n; i++){
        if (v[i] < curr){
            cout<<"+ "<<i+1<<" "<<curr-v[i]<<"\n";
        }
        else if (v[i] > curr){
            cout<<"- "<<i+1<<" "<<v[i]-curr<<"\n";
        }

        curr += k;
    }
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
