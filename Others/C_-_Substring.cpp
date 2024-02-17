#include <iostream>
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
    string s, t;
    cin>>s>>t;

    int cnt = 0, mn = 1000;
    for (int i = 0; i <= s.size()-t.size(); i++){
        for (int j = 0; j < t.size(); j++){
            if (t[j] != s[i+j]){
                cnt++;
            }
        }
        mn = min(cnt, mn);
        cnt = 0;
    }
    
    cout<<mn;
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
