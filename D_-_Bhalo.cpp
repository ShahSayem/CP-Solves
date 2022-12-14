#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int y;
    cin>>y;
 
    for (int i = 0; ; i++){
        y++;
        int ans = y;
 
        int a = y/1000;
 
        int b = (y/100)%10;
 
        int c = (y/10)%10;
 
        int d = y%10;
        
            if( a != b && a != c && a != d && b != c && b != d && d != c ){
                cout<<ans<<endl;
                break;
        }
 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int v, t;
    // while (cin>>v>>t){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
