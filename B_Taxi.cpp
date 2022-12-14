#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, j;
    cin>>n;

    map <int, int> mp;
    for (int i = 0; i < n; i++){
        cin>>j;
        mp[j]++;
    }
    
    int sum = mp[4]+mp[3]+mp[2]/2;
    mp[1] -= mp[3];

    if (mp[2]%2){
        sum += 1;
        mp[1] -= 2;
    }
    if (mp[1] > 0)
        sum += (mp[1]+3) / 4;

    cout<<sum;
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
  
