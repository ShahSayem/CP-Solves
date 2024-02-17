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
    v.push_back(-1);

    int i, j, x;
    for (i = n, j = 1; i > 0; i--, j++){

        if (i == j){
            break;
        }

        v.push_back(i);
    }
    
    j = 1;
    while (j <= i){
        v.push_back(j);
        j++;
    }

    v.push_back(-1);
    for (int i = 1; i <= n; i++){
        if ((abs(v[i]-v[i-1]) != 1 && abs(v[i]-v[i+1]) != 1)){
            cout<<-1;
            return;
        }
    }

    for (i = 1; i < v.size()-1; i++)
        cout<<v[i]<<" ";
    
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
