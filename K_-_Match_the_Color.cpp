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

int main()
{
    Shah_Sayem

    string s;
    while (cin>>s){
        map <char, ll> mp;
        for (int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        
        if (mp.size() == 1){
            cout<<"Done!\n";
            continue;
        }

        ll mx = 0, sum = 0;
        for (int i = 0; i < s.size(); i++){
            mx = max(mx, mp[s[i]]);
        }

        for (auto it : mp){
            sum += it.second;
        }
        
        sum -= mx;
        cout<<sum<<"\n";
    }

    return 0;
}
