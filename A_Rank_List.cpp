#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);


bool cmp(pair <int, int> a, pair <int, int> b) 
{
    if (a.first > b.first){
        return true;
    }
    else if (a.first < b.first){
        return false;
    }

    return a.second < b.second;
}

int main()
{
    Shah_Sayem

    int n, k, cnt  = 0;
    cin>>n>>k;
    k--;
    vector <pair <int, int> > v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(), cmp);
    
    // for (int i = 0; i < n; i++){
    //     cout<<v[i].first<<" "<<v[i].second<<"\n";
    // }
    
    pair <int, int> target = {v[k].first, v[k].second};
    for (int i = k; i < n; i++){
        if (v[i] == target)
            cnt++;
    }
    for (int i = k; i >= 0; i--){
        if (v[i] == target)
            cnt++;
    }
    
    if (cnt)
        cnt--;

    cout<<cnt;

    return 0;
}
