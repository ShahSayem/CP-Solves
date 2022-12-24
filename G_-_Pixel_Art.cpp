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
    int m, y, c;
    cin>>m>>y>>c;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'M')
            m--;
        else if (s[i] == 'Y')
            y--;
        else if (s[i] == 'C')
            c--;
        else if (s[i] == 'R')
            m--, y--;
        else if (s[i] == 'B')
            m--, y--, c--;
        else if (s[i] == 'G')
            y--, c--;
        else if (s[i] == 'V')
            m--, c--;
        

        if (m < 0 || y < 0 || c < 0){
            cout<<"NO";
            return;
        }
    }
    
    cout<<"YES "<<m<<" "<<y<<" "<<c;
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