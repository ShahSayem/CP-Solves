#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve(){
    int n;
    cin>>n;

    vector < vector <int> > ans(n);
    vector <int> v(n);

    int x = 1;
    for (int i = 0; i < n; i++){
        v[i] = x;
        x++;
    }
    
    ans[0] = v;
    int s = n-1, j = 0;
    for (int i = 1; i < n; i++){
        swap(v[j], v[s]);
        ans[i] = v;
        j++;
    }
    
    cout<<n<<"\n";
    for (auto it:ans){
        for (auto z:it)
            cout<<z<<" ";
        
        cout<<"\n";
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
        // cout<<"\n";
    }

    return 0;
} 
       
