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

    vector <int> v;
    if (n%2){
        v.push_back(n-3);
        v.push_back(n-2);
        for (int i = n-4; i > 0; i--){
            v.push_back(i);
        }
    }
    else {
        for (int i = n-2; i > 0; i--){
            v.push_back(i);
        }
    }

    v.push_back(n-1);
    v.push_back(n);

    for (auto x:v)
        cout<<x<<" ";
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