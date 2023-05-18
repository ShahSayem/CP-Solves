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
    string s, ss;
    int n, x = 0;

    cin>>n;
    cin>>s;
    ss = s;
    for (int i = 0; i < n; i++){
        if ((i+1 < n) && (s[i] == s[i+1])){
            cout<<"NO";
            return;
        }
    }

    char check;
    for (int i = 0; i < n; i++){
        check = s[i];
        for (int j = i; j < n; j++){
            if (s[j] == check){
                if (x)
                    s[j] = '1';
                else 
                    s[j] = '0';
            }

            if (j && (((s[j] == '0') && (s[j-1] == '0')) || ((s[j] == '1') &&  (s[j-1] == '1')))){
                cout<<"NO";
                return;
            }
        }

        if (x)
            x = 0;
        else 
            x = 1;
    }
    
    cout<<"YES";
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
