#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, x;
    cin>>n;

    vector <int> cnt(n+1, 0), divCount(n+1, 0);
    for (int i = 0; i < n; i++){
        cin>>x;

        if (x <= n)
            cnt[x]++;
    }

    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j+=i){
            divCount[j] += cnt[i];
        }  
    }    
    
    cout<<*max_element(divCount.begin(), divCount.end());
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
