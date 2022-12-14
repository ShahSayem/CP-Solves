#include <bits/stdc++.h>
#define ll long long;
using namespace std;

void solve(){
    string s;
    cin>>s;

    char ch;
    for (int i = 0; i < s.size(); i++){
        if ((s[i] == 'A' || s[i] == 'O' || s[i] == 'Y' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I') || (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'))
            continue;
        else if (s[i] > 'A' && s[i] <= 'Z'){
            ch = s[i]+32;
            cout<<"."<<ch;
        }
        else    
           cout<<"."<<s[i]; 
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    cout<<"\n";
    
    return 0;
}