#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, cnt1 = 0, cnt0 = 0;
    cin>>n;
    string s;
    cin>>s;

    ll ans = 1, len = 1, lenf = 1;
    for (int i = 0; i < n; i++){
        if (s[i] == '1')
            cnt1++;
        else 
            cnt0++;

        if (i && s[i] == s[i-1]){
            len++;
            lenf = max(len, lenf);
        }
        else {
            len = 1;
        }
    }
    
    if (cnt1 && cnt0)
        ans = cnt0*cnt1;
        
    ans = max(ans, (lenf*lenf));
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
