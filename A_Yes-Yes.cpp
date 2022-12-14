#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    string s, ss = "Yes";
    cin>>s;

    if (s.size() == 1){
        if (s[0] == 'Y' || s[0] == 'e' || s[0] == 's'){
            cout<<"YES";
            return;
        }
        else {
            cout<<"NO";
            return;
        }
    }

    for (int i = 0; i < s.size()-1; i++){
        if (s[i] == 'Y' && s[i+1] == 'e'){
            continue;
        }
        else if (s[i] == 'e' && s[i+1] == 's'){
            continue;
        }
        else if (s[i] == 's' && s[i+1] == 'Y'){
            continue;
        }
        else {
            cout<<"NO";
            return;
        }
    }
    
    cout<<"YES";
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
