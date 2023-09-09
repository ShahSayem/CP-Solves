#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string s, mx = "", curr = "";
    cin>>s;

    int n = s.size(), idx, mxVal = 0, currVal;
    for (int i = n-2; i >= 0; i--){
        curr = s.substr(i, 2);
        currVal = (curr[0]-'0')+(curr[1]-'0');
        
        if ((mxVal < currVal) || (currVal/10 == mxVal/10)){
            mxVal = currVal;
            idx = i;
        }    
    }
    
    for (int i = 0; i < n; i++){
        if (i == idx){
            cout<<mxVal;
            i++;
        }
        else {
            cout<<s[i];
        }
    }
    
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
