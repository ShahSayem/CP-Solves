#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    int a, b, c, d, k;
    cin>>a>>b>>c>>d>>k;

    int needPen = (a+c-1)/c; 
    int needPencil = (b+d-1)/d; 

    if (needPen + needPencil > k){
        cout<<-1;
    }
    else {
        cout<<needPen<<" "<<needPencil;
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
