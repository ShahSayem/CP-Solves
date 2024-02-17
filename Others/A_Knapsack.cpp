#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    ll n, w, halfWeight;
    cin>>n>>w;

    halfWeight = (w+1)/2LL;
    vector < pair<int,int> > weights(n);
    vector <int> path;
    for (int i = 0; i < n; ++i){
        cin>>weights[i].first;

        weights[i].second = i+1;
    }
    sort(weights.rbegin(), weights.rend());

    ll sum = 0;
    for (int i = 0; i < n; ++i){
        if (sum+weights[i].first <= w){
            sum += weights[i].first;
            path.push_back(weights[i].second);
        }

        if (sum >= halfWeight){
            break;
        }
    }

    if (sum <= w && sum >= halfWeight){
        cout<<path.size()<<"\n";
        sort(path.begin(), path.end());
        for(auto it:path){
            cout<<it<<" ";
        }
    }
    else {
        cout<<-1;
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