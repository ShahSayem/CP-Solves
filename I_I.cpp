#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    int n, ans, mx = 0;
    cin>>n;

    vector <int> v(n), vec;
    set <int> st;
    for (int i = 0; i < n; i++){
        cin>>v[i];
        
        mx = (v[i], mx);
    }

    int sz = n, idx = *st.end(), temp;
    bool check = 1;
    while (vec.size() > 1 || check){
        for (int i = 1; i < n-1; i++){
            temp = (v[i-1]+v[i+1], mx);
            if (v[i] < temp){
                vec.push_back(temp);
            }
        }
        check = 0;

    }
    
    
    
}

int main()
{
    Shah_Sayem

    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
