#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);


void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    set <string> st;
    for (int i = 0; i < n-1; i++){
        st.insert(s.substr(i, 2));
    }
    
    cout<<st.size();
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
