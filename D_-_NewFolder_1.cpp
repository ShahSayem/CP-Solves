#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, cnt = 0;
    cin>>n;

    string s;
    unordered_map <string, int> mp;
    for (int i = 0; i < n; i++){
        cin>>s;
        mp[s]++; 

        cout<<s;

        if (mp[s] > 1)  
            cout<<"("<<mp[s]-1<<")";
        
        cout<<"\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
