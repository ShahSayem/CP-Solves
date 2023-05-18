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
    set <int> s(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    int indx;
    vector < pair<int, int> > coprimes;
    for (int i = s.size()-1; i > 1; i--){
        for (int j = i-1; j > 0; j--){

        }
        if (__gcd(s[i], s[j]) == 1){
            coprimes.push_back({v[i], v[indx]});
        }
    }
    
    for (int i = 0; i < n; i++){

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
