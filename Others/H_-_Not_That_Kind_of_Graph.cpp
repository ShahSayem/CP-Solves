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
    string s;
    cin>>s;

    int x = 0, y = 0, pos = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'R'){
            cout<<"/";
        }
        else if (s[i] == 'F'){
            cout<<"\\";
        }
        else {
            cout<<"-";
        }
    }
    

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case #"<<i<<": \n";
        solve();
        cout<<"\n";
    }

    return 0;
}
