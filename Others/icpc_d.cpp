#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int a, b, c, k;
    cin>>a>>b>>c>>k;

    if (a == b && b == c){
        cout<<"Peaceful";
        return;
    }
    
    if (k > max({a, b, c})){
        cout<<"Fight";
        return;
    }

    int arr[3] = {a, b, c};
    sort(arr, arr+3);
    int i = 0, x;
    while (i <= arr[2]){
        if (arr[0] == arr[1] && arr[1] == arr[2]){
            cout<<"Peaceful";
            return;
        }

        sort(arr, arr+3);
        arr[2] -= k;
        sort(arr, arr+3);
        arr[0] += k;
        i++;
    }
    
    cout<<"Fight";
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
