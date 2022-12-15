//Shah Sayem
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

vector <int> rounds;

void solve()
{
    for (int i = 1; i <= MAX; i*= ){
            ans++;
            cnt++;

        cout<<i<<" ";
        
        if (i == 10 || (cnt == 10)){
            x *= 10;
            cnt = 0;

            cout<<"--"<<x<<"--"<<"\n";
        }
    }
    
    cout<<"\n"<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        int n;
        cin>>n;

        cout<<"\n";
    }

    return 0;
}
