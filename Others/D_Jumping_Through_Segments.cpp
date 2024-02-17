#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;

int n;
vector < pair <int, int> > seg(MAX);

bool isValid(int x)
{
    int lMin = 0, rMax = 0;
    for (int i = 0; i < n; i++){
        lMin = max(seg[i].first, lMin-x);
        rMax= min(seg[i].second, rMax+x);

        if (lMin > rMax)
            return false;
    }
    
    return true;
}

int mnVal()
{
    int l = 0, r = 1e9, mid;
    while (l < r){
        mid = (l+r)/2;
        if (isValid(mid))
            r = mid;
        else 
            l = mid+1;
    }
    
    return l;
}

void solve()
{
    cin>>n;

    for (int i = 0; i < n; i++){
        cin>>seg[i].first>>seg[i].second;
    }
    
    cout<<mnVal();
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
