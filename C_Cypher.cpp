#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, j;
    cin>>n;
    
    vector <int> v;
    for (int i = 0; i < n; i++){
        cin>>j;
        v.push_back(j);
    }

    char c;
    for (int i = 0; i < n; i++){
        cin>>j;
        for (int k = 0; k < j; k++){
            cin>>c;

            if (c == 'D')
                v[i]++;
            else 
                v[i]--;
            if (v[i] == 10)
                v[i] = 0;
            if (v[i] == -1)
                v[i] = 9;
        }
        
    }

    for (auto x:v)
        cout<<x<<" ";
    
    
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
  
