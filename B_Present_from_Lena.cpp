#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
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
    int n;
    cin>>n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            cout<<"  ";
        }

        for (int k = 0; k <= i; k++){
            if (i == 0 && k == 0)
                cout<<k;
            else
                cout<<k<<" ";
        }
        for (int l = i-1; l >= 0; l--){
            if (l == 0)
                cout<<l;
            else
                cout<<l<<" ";
        }
        cout<<"\n";
    }

    for (int i = n; i >= 0; i--){
        for (int j = 0; j < n-i; j++){
            cout<<"  ";
        }

        for (int k = 0; k <= i; k++){
            if (i == 0 && k == 0)
                cout<<k;
            else
                cout<<k<<" ";
        }
        for (int l = i-1; l >= 0; l--){
            if (l == 0)
                cout<<l;
            else
                cout<<l<<" ";
        }
        cout<<"\n";
    }   
}

int main()
{
    Shah_Sayem

    int t = 1;
    // cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
