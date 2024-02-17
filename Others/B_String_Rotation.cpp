#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    string s, t, curr;
    cin>>s>>t;

    int n = s.size();
    for (int i = 0; i < n; i++){
        curr = s.substr(n-i, i) + (s.substr(0, n-i));
        if (curr == t){
            cout<<"Yes";
            return;
        }

        //cout<<curr<<" ";
    }

    cout<<"No";
}

int main()
{
    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
