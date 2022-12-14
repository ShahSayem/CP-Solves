#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int a, b;
	cin>>a>>b;
    while (a>0 || b>0){
        if (a){
            cout<<0;
            a--;
        }
        if (b){
            cout<<1;
            b--;
        }
    }
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
  
