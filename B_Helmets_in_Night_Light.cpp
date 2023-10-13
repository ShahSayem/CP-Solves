#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

bool cmp(pair <int, int> a, pair <int, int> b)  //Asscending
{
    if (a.first < b.first){
        return true;
    }
    else if (a.first > b.first){
        return false;
    }

    return a.second > b.second;
}

void solve()
{
    int n, p;
    cin>>n>>p;

              //cost mxShare
    vector < pair<int, int> > v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].second;
    }
    for (int i = 0; i < n; i++){
        cin>>v[i].first;
    }
    sort(v.begin(), v.end(), cmp);

    ll cost = p, left = n-1, curr;
    for (int i = 0; i < n; i++){
        if (v[i].first >= p || left == 0){
            cost += (left*p);
            left = 0;
            break;
        }
        else {
            curr = min(left, (1LL * v[i].second));
            cost += (curr * v[i].first);

            left -= curr;
        }
    }
    
    // for (int i = 0; i < n; i++){
    //     cout<<v[i].second<<" "<<v[i].first<<"\n";
    // }
    
    cout<<cost;
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
