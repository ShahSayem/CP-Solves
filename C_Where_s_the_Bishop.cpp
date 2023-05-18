#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){

    char a [8][8];
    for (int r = 0; r < 8; r++){
        for (int c = 0; c < 8; c++){
            cin>>a [r][c];
        } 
    }
     
    for (int r = 0; r < 8; r++){
        for (int c = 0; c < 8; c++){
            if (a[r-1][c-1] == '#' && a[r-1][c+1] == '#' && a[r+1][c+1] == '#' && a[r+1][c+1] == '#'){
                cout<<r+1<<" "<<c+1;
                return;
            }
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