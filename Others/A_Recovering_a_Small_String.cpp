#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n;
    cin>>n;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    char a = 'a', b = 'b', c = 'c';
    for (int i = 1; i <= 26; i++){
        for (int j = 1; j <= 26; j++){
            for (int k = 1; k <= 26; k++){
                if (i+j+k == n){
                    a += i-1;
                    b += j-1;
                    c += k-1;

                    //cout<<i<<" "<<j<<" "<<k;
                    cout<<alphabet[i-1]<<alphabet[j-1]<<alphabet[k-1];
                    //cout<<a+b+c;
                    return;
                }
            }
        }
    }
    
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
