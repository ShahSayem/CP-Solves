#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> a(n), b(k), check;
    int mx = -1;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if (a[i] > mx)
            mx = a[i];
    }
    

    for (int i = 0; i < n; i++){
        if (a[i] == mx)
            check.push_back(i+1);
    }

    int x;
    bool ans = false;
    for (int i = 0; i < k; i++){
        cin>>x;
        ans = binary_search(check.begin(), check.end(), x);

        if (ans){
            cout<<"Yes";
            return;
        }
    }

    cout<<"No";
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