#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    string s;
    cin>>s;

    bool check;
    set <int> s1, s2;
    for(int i = 0;i < s.size(); i++){
            if(s[i]=='A') 
                s1.insert(i+1);
            else 
                s2.insert(i+1);
    }

    check = (s1.size() == s2.size());
    for(auto it = s1.begin(); it != s1.end() && check; it++){
        n = *(s2.lower_bound((*it)));
        if(n>(*it)) 
            s2.erase(n);
    }

    if(s2.empty() && check) 
        cout<<"Sim";
    else 
        cout<<"Nao";
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

    return 0;
} 
  
