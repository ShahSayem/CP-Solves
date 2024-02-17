#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a[2][2], cnt = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin>>a[i][j];

            if (a[i][j] == 1)
                cnt++;
        }
    }
    
    if (cnt == 0)
        cout<<0;
    else if (cnt == 4)
        cout<<2;
    else 
        cout<<1;
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
  
