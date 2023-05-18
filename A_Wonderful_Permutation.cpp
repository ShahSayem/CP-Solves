#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int n, k, cnt = 0, j;
    cin>>n>>k;

    for (int i = 0; i < n; i++){
        cin>>j;
        if ((j > k) && (i < k))
            cnt++;
    }

    cout<<cnt;
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
  
