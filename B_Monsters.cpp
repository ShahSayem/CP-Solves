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

void solve()
{
    int n, k, x;
    cin>>n>>k;

    vector <int> v(n);    
                 //val, idx
    vector <pair <int, int>> vec;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        v[i] %= k;
        if (v[i] == 0){
            cout<<i+1<<" ";
        }
        else{ 
            vec.push_back({v[i], i+1});
        }
    }
    sort(vec.begin(), vec.end(), cmp);

    for (int i = 0; i < vec.size(); i++){
        cout<<vec[i].second<<" ";
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
