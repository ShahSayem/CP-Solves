#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, sumE = 0, sumO = 0;
    cin>>n;

    vector <int> v(n);
    vector <int> vE, vO;
    for (int i = 0; i < n; i++){
        cin>>v[i];

        if (v[i]%2){
            vO.push_back(v[i]);

            sumO += v[i];
        }
        else{ 
            vE.push_back(v[i]);
            sumE += v[i];
        }
    }

    sort(vO.begin(), vO.end());
    sort(vE.begin(), vE.end());

    if (sumE > sumO){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}

int main()
{
    //Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
