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
    char c;
    cin>>c;

    string s;
    cin>>s;

    if (c == 'g'){
        cout<<0;

        return;
    }

    bool startEnd = false;
    int indx = 0, ans = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == c){
            startEnd = true;
            indx = i;
        }

        if (startEnd)
            cnt++;
        if (s[i] == 'g'){
            cnt--;
            cout<<cnt<<"\n";
            ans = max(cnt, ans);
            cnt = 0;
            startEnd = false;
        }
    }
    
    // for (int i = 0; !startEnd; i++){
    //     if (startEnd)
    //         cnt++;
    //     if (s[i] == 'g'){
    //         cnt--;
    //         ans = max(cnt, ans);
    //         cnt = 0;
    //         startEnd = false;
    //     }
    // }

    // cout<<ans;
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
