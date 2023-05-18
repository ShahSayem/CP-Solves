#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, a;
    cin>>n>>a;
    int mina = a, maxa = a, mini = 0, maxi = 0;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (a > maxa){
            maxa = a;
            maxi = i;
        }
        if (a <= mina){
            mina = a;
            mini = i;
        }
    }

    int x;
    if (mini < maxi) 
        x = 1;
    else
        x = 0;
    cout<<maxi+(n-1-mini)-x;
    
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
  
