#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector <int> pos;
    int elem;
    ll cnt = 0;
    for (int i = 1; i <= n; i++){
        cin>>elem;

        if (elem < i){
            cnt += lower_bound(pos.begin(), pos.end(), elem) - pos.begin();
            pos.push_back(i);
        }
    }
    
    cout<<cnt;
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
  
