#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    string s, s2;
    cin>>s;

    int n = s.size(), cnt = 0;
    map <char, int> mp;
    vector <int> v;
    for (int i = 0; i < n; i++){
        if (!mp[s[i]]){
            cnt++;
        }
        mp[s[i]]++;
    }
    
    if (cnt == n){
        cout<<-1;
        return;
    }

    for (auto it : mp){
        v.push_back(it.second);
    }
    sort(v.begin(), v.end());

    int m = v.size(), idx = -1;
    for (int i = 1; i < m; i++){
        if ((v[i] == v[i-1]) && (m%2)){
            cout<<-1;
            return;
        }
    }

    sort(s.begin(), s.end());
    s2 = s[0];
    for (int i = 1; i < n; i++){
        if (s[i] != s[i-1]){
            s2 += s[i];
        }
    }
    
    int x;
    for (int i = 0; i < m; i++){
        if(mp[s2[i]] == v[i] && v[i] > 1){
            x = v[i]-1;
            while (x--){
                cout<<s2[i];
            } 
        }
        else {
            x = v[i]+1;
            while (x--){
                cout<<s2[i];
            }
        }
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
