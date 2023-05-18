#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    string s, s2;
    cin>>s;
    cin>>s2;

    char check;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if ((s[i] == s2[i])){
            if (!cnt && s[i] != 'G' && s[i] != 'B'){
                check = s[i];
                cnt++;
            }
            else {
                if (s[i] != check && s[i] != 'G' && s[i] != 'B'){
                    cout<<"NO";
                    return;
                }
            }
        }
        else if ((s[i] == 'G' && s2[i] == 'B') || (s[i] == 'B' && s2[i] == 'G'))
            continue;
        else {
            cout<<"NO";
            return;
        }
    }
    
    cout<<"YES";
} 
  

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
} 