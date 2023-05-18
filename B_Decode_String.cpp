#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, num = 0;
    cin>>n;

    string s, ans = "";
    cin>>s;

    char c;
    for (int i = n-1; i > -1; i--){
        if (s[i] > '0'){
            c = s[i]+48;
            ans += c;
        }

        else {
            i--;
            num = 0;
            int x = s[i]-48;
            num += x;
            i--;
            x = s[i]-48;
            num += (x*10);
            
            c = 96+num;
            ans += c;
        }    
    }
    
    reverse(ans.begin(), ans.end());
    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
