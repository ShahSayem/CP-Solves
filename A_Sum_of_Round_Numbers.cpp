#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, mul = 1;
    cin>>n;

    vector <int> v;
    while (n){
        if (n%10){
            v.push_back((n%10)*mul);
        }

        mul *= 10;
        n /= 10;
    }
    
    cout<<v.size()<<"\n";
    for (auto it : v){
        cout<<it<<" ";
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
