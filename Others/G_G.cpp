#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

bool cmp(pair <ll, pair <int, string> > a, pair <ll, pair <int, string> > b)  //Decending
{
    if (a.first !=  b.first){
        return a.first > b.first;
    }

    return a.second.first < b.second.first;
}

void solve()
{
    int n;
    cin>>n;

    ll curr, pScore;
    string name;
    vector <int> v(6);
    vector < pair <ll, pair <int, string> > > ans;
    map <ll, int> cntPos;
    for (int i = 0; i < n; i++){
        cin>>name>>pScore;

        curr = 0;
        for (auto &&i : v){
            cin>>i;

            curr += i;
        }
        sort(v.begin(), v.end());

        curr -= (v[0]+v[5]);
        curr += (pScore*10);

        ans.push_back({curr, {i, name}});
    }
    sort(ans.begin(), ans.end(), cmp);

    int sz = ans.size(), cnt = 0;
    for (int i = 0; i < sz; i++){
        if (cnt < 1000){
            if (cnt >= 3){
                if (!cntPos[ans[i].first]){
                    break;
                }   
            }
            
            cntPos[ans[i].first]++;
            cout<<ans[i].second.second<<" "<<ans[i].first<<"\n";
            cnt++;
        }
        else {
            break;
        }
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
