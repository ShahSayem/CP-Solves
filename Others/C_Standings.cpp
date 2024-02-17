#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

bool cmp(pair <long double, int> a, pair <long double, int> b)  //Decending
{
    if (a.first > b.first){
        return true;
    }
    else if (a.first < b.first){
        return false;
    }

    return a.second < b.second;
}

void solve()
{
    int n;
    cin>>n;

    long double a, b;
    vector < pair <long double, int> > v(n);
    for (int i = 0; i < n; i++){
        cin>>a>>b;

        v[i] = {(a/(a+b)), i};
    }
    
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < n; i++){
        cout<<v[i].second+1<<" ";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
