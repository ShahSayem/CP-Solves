#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
#define error(x)        cerr << #x << " = " << (x) <<"\n";
#define Error(a,b)      cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n";
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int cnt  = 0, ans = 0;
    for (int i = 0; i < n; i++){
        cnt = 0;
        for (int j = 0; j < n; j++){
            if (s[i] == s[j] && i != j)
                cnt++;
        }
        
        ans = max(cnt, ans);
    }
    
    cout<<n-max(1, ans);
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
