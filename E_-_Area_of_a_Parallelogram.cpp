#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    ll ax, ay, bx, by, cx, cy, dx, dy, area;
    cin>>ax>>ay>>bx>>by>>cx>>cy;

    dx = ax + cx - bx;
    dy = ay + cy - by;

    area = 0.5 * (((ax * by) + (bx * cy) + (cx * dy) + (dx * ay)) - ((ay * bx) + (by * cx) + (cy * dx) + (dy * ax)));

    if (area < 0)
        area *= -1;
    cout<<dx<<" "<<dy<<" "<<area;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, x = 0;
    cin>>t;
    while (t--){
        x++;
        cout<<"Case "<<x<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
