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

    int vis[201][201];
    vis[100][100] = 1;
    int f1 = 100, f2 = 100;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == 'L')
            f2--;
        else if(s[i] == 'R')
            f2++;
        else if(s[i] == 'U')
            f1--;
        else
            f1++;

        if((vis[f1][f2]+ vis[f1-1][f2]+ vis[f1+1][f2] + vis[f1][f2-1] + vis[f1][f2+1]) > 1){
            cout<<"BUG";
            return;
        }
        vis[f1][f2] = 1;
    }

    cout<<"OK";
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
