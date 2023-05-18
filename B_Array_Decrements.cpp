#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, x = 0, y = 0;
    cin>>n;

    vector <int> v1, v2;
    
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        v1.push_back(j);
    }

    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        v2.push_back(j);
        
        if (i == 1)
            x = v1[i-1]-v2[i-1];
        else{
            y = x;
            x = v1[i-1]-v2[i-1];

            if (x != y && v2[i-1] != 0){
                cout<<"NO";
                return;
            }
        }
    }

    cout<<"YES";
  
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