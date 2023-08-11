#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);


void solve()
{
    int n, b, x;
    cin>>n>>b;

    int sum = -1;
    for (int i = 0; i < n; i++){
        cin>>x;

        if ((x & b) == b){
            if (sum == -1)
                sum = x;
            else 
                sum &= x;
        }
    }
    
    if (sum == b)
        cout<<"YES";
    else 
        cout<<"NO";    
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
