#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int n, up =0, down =0, cnt;
    string s;
    cin>>n>>s;

    for (int i = 0; i < n; i++){
        if (s[i] == 'x')
            down++;
        else    
            up++;
    }
    
    if (up > down){    
        cnt = (n/2)-down;
        cout<<cnt;
        
        for (int i = 0; i < n; i++){
            if (s[i] == 'X' && cnt){
                cnt--;
                s[i] = 'x';
            }
        }
    }
    else if (down > up){
        cnt = (n/2)-up;
        cout<<cnt;

        for (int i = 0; i < n; i++){
            if (s[i] == 'x' && cnt){
                cnt--;
                s[i] = 'X';
            }
        }
    }
    else {
        cout<<0;
    }

    cout<<"\n"<<s;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
