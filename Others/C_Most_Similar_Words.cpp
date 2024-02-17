#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{  
    int n, m, sum = 0, q = 0, mn = 0, ans = INT_MAX;
    cin>>n>>m;    

    vector <string> v;
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            sum = 0, q = 0, mn = 0;
            string x, y;
            x = v[i];
            y = v[j];
            for (int i = 0; i < m; i++){
                if (x[i]<y[i]){
                    q = y[i]-x[i];
                }
                else {
                    q = x[i]-y[i];
                }
                sum += q;
            }
            ans = min(sum, ans); 
        }       
                     
    }  
    cout<<ans;    
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    