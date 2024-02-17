#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 100000;

///.........Graph.........///
//vector <int> adj[10000000];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, cnta1 = 0, cnta0 = 0, cntb1 = 0, cntb0 = 0;
    cin>>n;
    string a, b;
    cin>>a>>b;

    for (int i = 0; i < n; i++){
        if (a[i] == '0')
            cnta0++;
        else
            cnta1++;

        if (b[i] == '0')
            cntb0++;
        else
            cntb1++;
    }
    
    if (cnta1 == cntb1 && cnta0 == cntb0){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
