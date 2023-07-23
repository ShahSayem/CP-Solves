#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

int main()
{
    Shah_Sayem

    int n;
    cin>>n;
    int point;
    ll mxPoint = 0;
    map <string, ll> mp, mp2;
    vector < pair<string, ll> > v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;

        mp[v[i].first] += v[i].second;

        //cout<<v[i]<<" "<<mp[v[i]]<<"\n";
    }

    for (auto &it : mp){
        mxPoint = max(it.second, mxPoint);
    }
    //cout<<mxPoint;

    for (int i = 0; i < n; i++){
        //cout<<v[i].first<<" "<<mp[v[i].first]<<"\n";

        mp2[v[i].first] += v[i].second;
        if ((mp2[v[i].first] >= mxPoint) && (mp[v[i].first] == mxPoint)){
            cout<<v[i].first<<"\n";
            break;
        }
    }

    return 0;
}
