#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int n, j;
    cin>>n;

    unordered_map <int, int> mp;
    vector <int> v;
    for (int i = 0; i < n; i++){
        cin>>j;
        mp[j]++;
    }
    
    for (auto z:mp){
        v.push_back(z.second);
    }

    sort(v.rbegin(), v.rend());

    int check = v[0], cnt = 1;
    for (int i = 1; i < v.size(); i++){
        if (v[i] == check)
            cnt++;

        if (cnt > 1){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
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
  
