#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    ll sum = 0, ans = 0, check;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            sum = v[i]+v[j];
            check = upper_bound(v.begin(), v.end(), sum-1)-v.begin();
            check--;

            if (check > j)
                ans += check-j;
        }
    }
    
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
