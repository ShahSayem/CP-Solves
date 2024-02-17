#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    
    string s(n, 'a');
    for(int i = n-2; i >= 0; i--){
        int x = n-1-i;

        if (k <= x){
            s[i] = 'b';
            s[n-k] = 'b';
            break;
        }
        k -= x;
    }
    cout<<s;
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
  
