#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n;
    cin>>n;

    string a, b;
    cin>>a>>b;

    int cntA = 0, cntB = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == 'R'){
            if (b[i] == 'S'){
                cntA++;
            }
            else if (b[i] == 'P'){
                cntB++;
            }
        }
        else if (a[i] == 'P'){
            if (b[i] == 'S'){
                cntB++;
            }
            else if (b[i] == 'R'){
                cntA++;
            }
        }
        else { //S
            if (b[i] == 'P'){
                cntA++;
            }
            else if (b[i] == 'R'){
                cntB++;
            }
        }
    }

    if (cntA > cntB){
        cout<<0;
    }
    else if (cntB == cntA){
        cout<<1;
    }
    else {
        int half = (cntA+cntB)/2;
        cout<<half-cntA+1;
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
