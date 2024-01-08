#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, cntPos = 0, cntNeg = 0, zero = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i] == 0)
            zero++;
        else if (v[i] > 0)
            cntPos++;
        else 
            cntNeg++;
    }
    
    if (!cntNeg && !zero){
        cout<<"1\n";
        cout<<"1 0";
        return;
    }

    if (zero || (cntNeg & 1)){
        cout<<0;
    }
    else{
        cout<<"1\n";
        for (int i = 0; i < n; i++){
            if (v[i] < 0){
                cout<<i+1<<" "<<0;
                return;
            }
        } 
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
