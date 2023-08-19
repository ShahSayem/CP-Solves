#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    Shah_Sayem

    string s;
    cin>>s;
    int n = s.length();

    stack <char> stk;
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (stk.empty() || s[i] != stk.top()){
            stk.push(s[i]);
        }
        else {
            ans ^= 1;
            stk.pop();
        }
    }
    
    if (ans)
        cout<<"Yes\n";
    else 
        cout<<"No\n";

    return 0;
}
