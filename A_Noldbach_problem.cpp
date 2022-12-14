#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k, cnt = 0, temp, check;
    cin>>n>>k;

    for (int i = 2; i <= n; i++){
        temp = i-1;
        for (int j = 2; j*j <= n; j++){
            while (temp%j == 0){
                cnt++;
                temp /= j;
            }
        }
        if (temp>1)
            cnt++;

        if (cnt > 2){
            check++;
        }

        cnt = 0;
    }
    
    if (check >= k)
        cout<<"YES";
    else 
        cout<<"NO";
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
  
