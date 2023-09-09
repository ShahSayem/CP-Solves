#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


int main()
{
    Shah_Sayem

    int n;
    cin>>n;

    ll x, y, p, q;
    ll a, b;
    for (int i = 0; i < n; i++){
        cin>>a>>b;

        if (!i){
            x = a, y = b;
            continue;
        }

        p = x/a, q = y/b;
        if (x%a)
            p++;
        if(y%b)
            q++;

        x = a*max(p, q);
        y = b*max(p, q);
    }

    cout<<x+y;

    return 0;
}
