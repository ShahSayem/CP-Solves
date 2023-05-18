#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    string s;
    cin>>s;

    vector <char> ch = {'h', 'e', 'l', 'l', 'o'};
    int j = 0, check = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == ch[j]){
            j++;
            check++;
        }
    }
    
    if (check > 4)
        cout<<"YES";
    else    
        cout<<"NO";
        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
    // }

    cout<<"\n";

    return 0;
}