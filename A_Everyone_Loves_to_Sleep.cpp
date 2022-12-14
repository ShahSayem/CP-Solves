#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, h, m, hi, mi, Hi = 24, Mi = 60, x, Xi, Fi = 1440;
    cin>>n>>h>>m;

    x = h*60 + m;
    vector <int> v;
    for (int i = 0; i < n; i++){
        cin>>hi>>mi;

        Xi = hi*60 + mi;
        int check = Xi-x;

        if (check < 0){
            check = 1440+check;
        }

        Fi = min(Fi, check);
    }
    
    cout<<Fi/60<<" "<<Fi%60;

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
  
