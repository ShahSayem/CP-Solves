#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int a1, a2, b1, b2, c1, c2;
    cin>>a1>>a2>>b1>>b2;

    c1 = -1*(a1-a2 + b1-b2);
    c2 = -1*(a2-a1 + b2-b1);

    if (c1 > c2){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }

    //cout<<c1<<" "<<c2;
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
