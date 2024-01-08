#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n;
    cin>>n;

    bool check = 1;
    vector <int> a(n), b(n);
    priority_queue < pair <int, pair <int, int> > > pq;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        cin>>b[i];

        pq.push({a[i]+b[i], {a[i], b[i]}});
    }
    
    bool op = 0;
    ll sumA = 0, sumB = 0;
    while (!pq.empty()){
        if (!op){ //Alice
            sumA += pq.top().second.first-1;
        }
        else {
            sumB += pq.top().second.second-1;
        }

        pq.pop();
        op = !op;
    }
    
    cout<<sumA-sumB;
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
