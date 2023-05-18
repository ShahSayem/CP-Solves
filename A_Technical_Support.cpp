#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, cntq = 0, cnta = 0;;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'Q')
            cntq++;
        else {
            if (cntq > cnta)
                cnta++;
        }
    }
    
    if (cntq <= cnta){
        cout<<"Yes";
    }
    else 
        cout<<"No";
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
