#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, cnt = 0;
    cin>>n>>k;

    string s;
    cin>>s;

    for (int i = 0; i < k; i++){
        if (s[i] == 'W')
        cnt++;
    }
    
    int ans = cnt;
    for (int i = k; i < n; i++){
        if (s[i] == 'W')
            cnt++;
        if (s[i-k] == 'W')
            cnt--;
        
        ans = min(ans, cnt);
    }
    cout<<ans;
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