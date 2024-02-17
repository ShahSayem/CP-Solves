#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, m, sz, curr, cnt = 0;
    cin>>n>>m;

    ll len = 0;
    string s;
    priority_queue <ll> pq;
    for (int i = 0; i < n; i++){
        cin>>s;

        sz = s.size();
        len += sz;
        curr = sz-1;
        cnt = 0;
        while (s[curr] == '0')
            curr--, cnt++;

        pq.push(cnt);
    }

    bool turn = 1;
    while (!pq.empty()){
        curr = pq.top();
        pq.pop();

        if (turn){ //Anna -- rev
            len -= curr;
        }

        turn = !turn;
    }

    if (len > m)
        cout<<"Sasha";
    else 
        cout<<"Anna"; 
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
