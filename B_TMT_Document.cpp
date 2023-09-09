#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, cntT = 0, cntM = 0;
    cin>>n;

    string s;
    cin>>s;

    for (int i = 0; i < n; i++){
        if (s[i] == 'T')
            cntT++;
        else 
            cntM++;

        if (cntT < cntM){
            cout<<"NO";
            return;
        }
    }

    cntT = 0, cntM = 0;
    for (int i = n-1; i >= 0; i--){
        if (s[i] == 'T')
            cntT++;
        else 
            cntM++;

        if (cntT < cntM){
            cout<<"NO";
            return;
        }
    }
    
    if (cntT != 2*cntM){
        cout<<"NO";
    }
    else{
        cout<<"YES";
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
