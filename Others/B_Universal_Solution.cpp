#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    string s;
    cin>>s;

    int n, cntS = 0, cntP = 0, cntR = 0;
    n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] == 'S')
            cntS++;
        else if (s[i] == 'P')
            cntP++;
        else 
            cntR++;
    }
    
    if (cntS >= cntR && cntS >= cntP){
        for (int i = 0; i < n; i++)
            cout<<'R';
    }
    else if (cntR >= cntS && cntR >= cntP){
        for (int i = 0; i < n; i++)
            cout<<'P';
    }
    else {
        for (int i = 0; i < n; i++)
            cout<<'S';
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
