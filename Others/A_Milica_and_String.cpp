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
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    int cntA = 0, cntB = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'A')
            cntA++;
        else 
            cntB++;
    }
    
    // cout<<cntA<<" "<<cntB;
    // return;

    if (k == cntB){
        cout<<0;
        //return;
    }
    else if (k > cntB){
        cout<<1<<"\n";
        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == 'A')
                cnt++;

            if (cnt+cntB == k){
                cout<<i+1<<" "<<'B';
                break;
            }
        }  
    }
    else {
        if (k == 0){
            cout<<1<<"\n";
            cout<<n<<" "<<'A';
        }
        else{
            int cnt = 0;
            for (int i = n-1; i >= 0; i--){
                if (s[i] == 'B')
                    cnt++;

                if (cnt == k){
                    cout<<1<<"\n";
                    cout<<i<<" "<<'A';
                    return;
                }
            }
            
            cout<<2<<"\n";
            cout<<n<<" "<<'A'<<" \n";
            cout<<k<<" "<<'B';
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
