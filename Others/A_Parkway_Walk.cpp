#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int x,y, sum = 0, ans, a;
	cin>>x>>y;
    while (x--){
        cin>>a;
        sum += a;
    }
    
    ans = sum-y;

    if (ans < 0)
        cout<<0;
    else
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
  
