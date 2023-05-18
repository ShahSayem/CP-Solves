#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int s, n;
    cin>>s>>n;

    vector < pair<int, int> > v;
    while (n--){
        int x, y;
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());
    for (auto x : v){
        if (x.first >= s){
            cout<<"NO";
            return;
        }
        else
            s += x.second;
    }

    cout<<"YES"; 
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