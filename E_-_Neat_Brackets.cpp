#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    string s;
    cin>>s;

    if (s.size()%2){
        cout<<"No";
        return;
    }    
    
    stack <char> st;
    char c;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(')
            st.push(s[i]);
        else {
            if (st.empty()){
                cout<<"No";
                return;
            }

            c = st.top();
            st.pop();

            if (c != '('){
                cout<<"No";
                return;
            }
        }
    }
    
    if (st.empty())
        cout<<"Yes";
    else 
        cout<<"No";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
