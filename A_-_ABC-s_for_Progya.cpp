#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    string s;
    cin.ignore();
    getline(cin, s);
    sort(s.begin(), s.end());
    
    set <char> st;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= 'a' && s[i] <= 'z' )
            st.insert(s[i]);

        if (st.size() == 26){
            cout<<"Happy Typing Progya!!";
            return;
        }
    }
    
    string ans = "";
    char c = 'a';
    for (auto z:st){
        if (c != z){
            ans += c;
        }
        c++;
    }
    
    reverse(ans.begin(), ans.end());

    cout<<ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, x = 0;
    cin>>t;
    while (t--){
        x++;
        cout<<"Case "<<x<<": ";
        solve();
        cout<<"\n";
    }


    return 0;
} 
  
