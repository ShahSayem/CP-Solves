#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, i, cnt = 0, x, sum;
    cin>>n;
   
    for (i = 19; cnt < n; i++){
        x = i;
        sum = 0;
        while (x != 0){
            sum += x%10;
            x /= 10;
        }
        
        if (sum == 10)
            cnt++;
    }
    cout<<i-1;
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
  
