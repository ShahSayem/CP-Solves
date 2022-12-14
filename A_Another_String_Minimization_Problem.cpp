#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;

    string s;
    for (int i = 0; i < m; i++){
        s += 'B';
    }

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] <= (m+1-v[i])){
            if (s[v[i]-1] == 'B')
                s[v[i]-1] = 'A';
            else 
                s[m+1-v[i]-1] = 'A';
        }
        else {
            if (s[m+1-v[i]-1] == 'B')
                s[m+1-v[i]-1] = 'A';
            else 
                s[v[i]-1] = 'A';
        }
    }
    
    cout<<s;
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
  
