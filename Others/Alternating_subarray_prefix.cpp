#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n;
    cin>>n;
    
    vector <int> v(n), suffSum(n, 1);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    for (int i = n-2; i >= 0; i--){
        if ((0 < v[i] && 0 < v[i+1]) || (0 > v[i] && 0 > v[i+1])){
            continue;
        }

        suffSum[i] += suffSum[i+1];
    }

    for (auto it : suffSum){
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
