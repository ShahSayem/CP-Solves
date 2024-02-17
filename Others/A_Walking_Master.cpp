#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int a, b, c, d, x, y, ans = 0;
    cin>>a>>b>>c>>d;

    if (b > d){
        cout<<-1;
        return;
    }

    if (b >= 0 && d >= 0){
        y = d-b;
    }
    else if (b < 0 && d < 0){
        y = abs(abs(d) - abs(b));
    }
    else {
        y = abs(b)+d;
    }

    ans += y;

    a += y;
    b += y;

    if (b != d || a < c){
        // cout<<b<<" "<<d<<" "<<a<<" "<<c<<"\n";
        cout<<-1;
        return;
    }

    if (a >= 0 && c >= 0){
        x = a-c;
    }
    else if (a < 0 && c < 0){
        x = abs(abs(a) - abs(c));
    }
    else {
        x = a+abs(c);
    }

    ans += x;

    cout<<ans;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
