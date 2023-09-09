#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


int main()
{
    Shah_Sayem
    int n, mx = 0;
    cin>>n;

    ll sum = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mx = max(v[i], mx);
        sum += v[i];
    }
    
    if (sum%2 == 0 && mx <= sum-mx)
        cout<<"YES";
    else 
        cout<<"NO";

    return 0;
}
