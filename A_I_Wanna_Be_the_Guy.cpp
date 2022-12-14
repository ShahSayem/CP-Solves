#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){

    int n, p, x;
    cin>>n;

    set <int> s;
    cin>>p;
    for (int i = 0; i < p; i++){
        cin>>x;
        s.insert(x);
    }

    cin>>p;
    for (int i = 0; i < p; i++){
        cin>>x;
        s.insert(x);
    }

    if (s.size() == n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    
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