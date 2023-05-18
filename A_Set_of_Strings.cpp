#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int k;
    cin>>k;

    string q;
    cin>>q;

    set <char> st;
    for (int i = 0; i < q.size(); i++){
        st.insert(q[i]);
    }

    int cnt = 0;
    map <char, int> mp;
    bool check = 1;
    if (st.size() >= k){
        cout<<"YES\n";
        for (int i = 0; i < q.size(); i++){
            if (mp[q[i]] == 0 && check){
                if (i)
                    cout<<"\n";

                mp[q[i]]++;
                cnt++;

                if (cnt == k)
                    check = 0;
            }

            cout<<q[i];
        }
    }
    else {
        cout<<"NO\n";
    } 
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
