#include <iostream>
#include <vector>
using namespace std;


void solve()
{
    int a, b, x , y;
    cin>>a>>b;

    x = min(a, b);
    y = max(a, b);
    for (int i = 0; i < y; i++){
        cout<<x;
    }

}

int main()
{
    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
