#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve(){
    int n, sum = 0, cntEven = 0, cntOdd = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        sum += v[i];

        if (v[i]%2)
            cntOdd++;
        else 
            cntEven++;
    }
    
    if (cntEven == n || cntOdd == n){
        cout<<n;
        return;
    }

    if (sum%2){
        cout<<cntOdd;
    }
    else {
        cout<<cntEven;
    }
    
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
  
