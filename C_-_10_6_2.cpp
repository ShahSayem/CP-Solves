#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    double l, w, r;
    cin>>l;

    w = l*(6.0/10.0);
    r = l*(1.0/5.0);

    double pi = 3.141592654;

    double r_area = pi*r*r;
    double g_area = (l*w)-r_area;

    // cout<<r_area<<" "<<g_area;

    printf("%0.2lf ", r_area);
    printf("%0.2lf", g_area);
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    
    return 0;
}