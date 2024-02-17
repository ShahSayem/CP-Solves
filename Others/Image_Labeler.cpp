#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;

    double j;
    vector <double> v;
    for (int i = 0; i < n; i++){
        cin>>j;
        v.push_back(j);
    }    

    sort(v.rbegin(), v.rend());

    double ans = 0, mid = 0;
    for (int i = 0; i < n-m; i++){
        ans += v[i];
        v.erase(v.begin());
    }

    if (n%2){
        mid = v[v.size()/2];
    }
    else {
        mid = (v[v.size()/2] + v[v.size()/2 - 1])/2;
    }
    
    ans += mid;
    
    printf("%0.1lf\n", ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
    }

    return 0;
} 
  
