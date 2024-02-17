#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string a, b;
    cin>>a>>b;

    ll mul = 0, cntA = 0, cntB = 0;
    if (a == "0" || b == "0"){
        cout<<0;
    }
    else {
        for (int i = 0; i < a.size(); i++){
            if (a[i] == 'S')
                cntA++;
        }
        
        for (int i = 0; i < b.size(); i++){
            if (b[i] == 'S')
                cntB++;
        }

        mul = cntA * cntB;

        for (int i = 0; i < mul; i++){
            cout<<"S(";
        }
        cout<<"0";
        for (int i = 0; i < mul; i++){
            cout<<")";
        }
    }
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
