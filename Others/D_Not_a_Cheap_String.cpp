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
    string s, ss;
    cin>>s;

    ss = s;
    int p;
    cin>>p;

    int n = s.size();
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += (s[i]-'a'+1);
    }

    if (sum <= p){
        cout<<s;
        return;
    }
    
    map <char, int> mp;
    sort(s.begin(), s.end());
    for (int i = n-1; i >= 0; i--){
        sum -= (s[i]-'a'+1);
        mp[s[i]]++;

        if (sum <= p){
            break;
        }
    }
    
    for (int i = 0; i < n; i++){
        if (mp[ss[i]]){
            mp[ss[i]]--;
        }
        else{
            cout<<ss[i];
        }
    }
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
