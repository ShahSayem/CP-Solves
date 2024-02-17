#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, x;
    cin>>n;
                        //val  idx
    priority_queue < pair<int, int> > pq;
    for (int i = 1; i <= n; i++){
        cin>>x;

        if (x)
            pq.push({x, i});
    }
    
    pair <int, int> a, b;
    vector < pair<int, int> > ans;
    while (!pq.empty()){
        if (pq.size() == 1){
            cout<<"no";
            return;
        }

        a = pq.top();
        a.first--;
        pq.pop();

        b = pq.top();
        b.first--;
        pq.pop();

        ans.push_back({a.second, b.second});

        if(a.first > 0)
            pq.push(a);
        
        if(b.first > 0)
            pq.push(b);
    }

    cout<<"yes\n";
    for (auto it : ans){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
