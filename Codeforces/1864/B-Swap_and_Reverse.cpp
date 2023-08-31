#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1000+5;


void solve()
{
    int n, k;
    cin>>n>>k;

    string s, a = "", b = "";
    cin>>s;
    
    if (k%2){
        for (int i = 0; i < n; ++i){
            if (i%2){
                a += s[i];
            }
            else {
                b += s[i];
            }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int x = 0, y = 0;
        for (int i = 0; i < n; ++i){
            if (i%2)
                cout<<a[x++];
            else
                cout<<b[y++];
        }
    }
    else {
        sort(s.begin(), s.end());
        cout<<s;
    }
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        // cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }
 
    return 0;
}