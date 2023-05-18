#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;

    unordered_map <string, int> mp;
    vector <string> v[3];
    string temp;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < n; j++){
            cin>>temp;
            mp[temp]++;
            v[i].push_back(temp);
        }
    }
        
    int cnt;
    for (int i = 0; i < 3; i++){
        cnt = 0;
        for (int j = 0; j < v[i].size(); j++){
            temp = v[i][j];

            if (mp[temp] == 1)
                cnt += 3;
            else if (mp[temp] == 2)
                cnt ++;
        }
        cout<<cnt<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
} 