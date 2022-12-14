#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, i;
    cin>>n;
    
    vector <int> v(n);
    map <int, int> mp;
    for (i = 0; i < n; i++){
        cin>>v[i];
    }

    for (i = n-1; i > -1; i--){
        if (mp[v[i]])
            break;
        else
            mp[v[i]]++;
    }

    cout<<i+1;
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
  
