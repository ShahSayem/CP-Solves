#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

int X[] = {1, 1, -1, -1};
int Y[] = {1, -1, 1, -1};

void solve()
{
    int a, b, xk, yk, xq, yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;

    int cnt = 0;
    set < pair <int, int>> st, st2;
    for (int i = 0; i < 4; i++){
        st.insert({xk+X[i]*a, yk+Y[i]*b});
        st.insert({xk+X[i]*b, yk+Y[i]*a});
        st2.insert({xq+X[i]*a, yq+Y[i]*b});
        st2.insert({xq+X[i]*b, yq+Y[i]*a});
    }
    
    for (auto it : st){
        if (st2.count(it))
            cnt++;
    }
    
    cout<<cnt;
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
