#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());

    int curr = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > curr)
            curr++;
    }
    
    cout<<curr;
}

int main()
{
    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
