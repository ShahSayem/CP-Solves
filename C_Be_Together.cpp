#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);


void solve()
{
    int n;
    double sum = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        sum += v[i];
    }
    sort(v.begin(), v.end());
    
    int target = round(sum/n), cost = 0;
    for (int i = 0; i < n; i++){
        cost += ((v[i]-target)*(v[i]-target));
    }
    
    cout<<cost;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
