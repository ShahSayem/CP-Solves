#include <bits/stdc++.h>
using namespace std;


void solve()
{
    vector <int> v(4);
    for (int i = 0; i < 4; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    
    if (v[3] > (v[0]+v[1]+v[2])){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
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
