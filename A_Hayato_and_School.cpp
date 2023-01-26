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
    int n, cntOdd = 0, cntEven = 0, x;
    cin>>n;

    vector <int> odd, even;
    for (int i = 0; i < n; i++){
        cin>>x;

        if (x%2){
            cntOdd++;
            odd.push_back(i+1);
        }
        else {
            cntEven++;
            even.push_back(i+1);           
        }
    }

    if (cntOdd > 2){
        cout<<"YES\n";
        for (int i = 0; i < 3; i++){
            cout<<odd[i]<<" ";
        }
    }
    else if ((cntEven > 1 && cntOdd)) {
        cout<<"YES\n";
        for (int i = 0; i < 2; i++){
            cout<<even[i]<<" ";
        }
        cout<<odd[0];
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
