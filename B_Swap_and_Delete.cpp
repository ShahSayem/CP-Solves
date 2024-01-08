#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string s;
    cin>>s;

    int n = s.size(), cnt0 = 0, cnt1 = 0;
    int i = 0;
    for (; i < n; i++){
        if (s[i] == '0')
            cnt0++;  
        else 
            cnt1++;   
    }

    i = 0;
    for (; i < n; i++){
        if(s[i] == '0'){
            if (cnt1)
                cnt1--;
            else 
                break;
        }
        else {
            if (cnt0)
                cnt0--;
            else 
                break;
        }
    }   
    
    cout<<n-i;
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
