#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, cnt = 0;
    cin>>n;

    if (n == 1){
        cout<<1<<"\n";
    }
    else {
        cnt++;
        cout<<"196"+string(n-3, '0')<<"\n";
        for (int i = 0; cnt < n; i++){
            //cout<<"1"+string(i, '0')<<"9"+string(i, '0')<<"6"+string(n-(2*i)-3, '0')<<"\n";
            cout<<"1"+string(i, '0')<<"6"+string(i, '0')<<"9"+string(n-(2*i)-3, '0')<<"\n";
            cout<<"9"+string(i, '0')<<"6"+string(i, '0')<<"1"+string(n-(2*i)-3, '0')<<"\n";

            cnt += 2;
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
        //cout<<"\n";
    }

    return 0;
}
