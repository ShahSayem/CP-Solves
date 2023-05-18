#include <bits/stdc++.h>
#define ll long long;
using namespace std;

void solve(){
    int n, sum = 0;
    cin>>n;

    vector <int> v;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;

        if (j < 0)
            j = 0;
        v.push_back(j);
        
        sum += v[i];
    }
    
    cout<<sum;
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