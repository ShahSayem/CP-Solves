#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int x;
    cin >> x;
    vector<int> ans;
    int sum = 0, last = 9;

    while (sum < x && last > 0) {
        ans.push_back(min(x - sum, last));
        sum += last;
        last--;
    }

    if (sum < x) {
        cout << -1;
    } 
    else {
        reverse(ans.begin(), ans.end());

        for (auto z : ans) {
        cout << z;
        }
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
  
