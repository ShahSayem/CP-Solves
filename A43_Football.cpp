#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    string a;
    map <string, int> mp;
    
    while (n--){
        cin>>a;
        mp[a]++;
    }
    
    auto x = max_element(mp.begin(), mp.end());
    auto y = min_element(mp.begin(), mp.end());

    if (x->second > y->second)
        cout<<x->first;
    else
        cout<<y->first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}