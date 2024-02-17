#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, k, mxEeven, mxOdd;
    cin>>n>>k;

    mxOdd = n-(k-1);
    mxEeven = n-2*(k-1);

    if ((mxOdd > 0) && (mxOdd & 1)){
        cout<<"YES\n";

        for (int i = 0; i < k-1; i++){
            cout<<1<<" ";
        }  
        cout<<mxOdd;
    }
    else if ((mxEeven > 0) && ((mxEeven & 1) == 0)){
        cout<<"YES\n";

        for (int i = 0; i < k-1; i++){
            cout<<2<<" ";
        } 
        cout<<mxEeven;
    }
    else {
        cout<<"NO";
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
