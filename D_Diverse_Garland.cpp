#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, cnt = 0;
    cin>>n;

    string s;
    cin>>s;

    for (int i = 1; i < n; i++){
        if (s[i] == s[i-1]){
            if (i < n-1 && s[i] == s[i+1]){
                if (s[i] == 'G'){
                    s[i] = 'B';
                }
                else {
                    s[i] = 'G';
                }
            }
            else {
                if (i == n-1){
                    if (s[i] == 'G'){
                        s[i] = 'B';
                    }
                    else {
                        s[i] = 'G';
                    }
                }
                else {
                    if (s[i] == 'G' && s[i+1] != 'B'){
                        s[i] = 'B';
                    }
                    else if (s[i] == 'G' && s[i+1] != 'R'){
                        s[i] = 'R';
                    }
                    else if (s[i] == 'B' && s[i+1] != 'G'){
                        s[i] = 'G';
                    }
                    else if (s[i] == 'B' && s[i+1] != 'R'){
                        s[i] = 'R';
                    }
                    else if (s[i] == 'R' && s[i+1] != 'G'){
                        s[i] = 'G';
                    }
                    else if (s[i] == 'R' && s[i+1] != 'B'){
                        s[i] = 'B';
                    }
                }
            }
            cnt++;
        }
    }

    
    cout<<cnt<<"\n";
    cout<<s;
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
