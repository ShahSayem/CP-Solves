#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];

void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> clr(n);
    map <int, int> clrCnt;
    for (int i = 0; i < n; i++){
        cin>>clr[i];
        clrCnt[clr[i]]++;
    }
    
    if (clrCnt[clr[0]] >= k && clr[0] == clr[n-1]){
        cout<<"YES";
        return;
    }

    int cntA = 0, cntB = 0, idxA, idxB;
    if (clrCnt[clr[0]] >= k && clrCnt[clr[n-1]] >= k){
        for (int i = 0; i < n; i++){
            if (clr[i] == clr[0])
                cntA++;

            if (cntA == k){
                idxA = i;
                break;
            }   
        }

        for (int i = n-1; i >= 0; i--){
            if (clr[i] == clr[n-1])
                cntB++;

            if (cntB == k){
                idxB = i;
                break;
            }    
        }
        
        if (idxA < idxB){
            cout<<"YES";
            return;
        }
        // cout<<"YES";
        // return;
    }

    cout<<"NO";
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
