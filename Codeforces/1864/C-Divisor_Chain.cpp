#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

 
///.........Graph.........///
// vector <int> adj[MAX];
// vector <int> primeList[MAX];
// bool vis[MAX];
// int dist[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

int findMSB(int num) {
    int msb = -1;
    while (num > 0) {
        num >>= 1;
        msb++;
    }

    return msb;
}


void solve()
{
    int x, d, cnt = 1, start = 1;
    int rmb, remain, power = 0, mxMove = 1;
    cin>>x;

    vector <int> ans;
    ans.push_back(start);
    while(start < x){
        if (start+start <= x){
            start += start;
            ans.push_back(start);
            cnt++;
        }
        else {
            remain = x-start;
            power = findMSB(remain);
            mxMove = 1;
            for (int i = 0; i < power; ++i){
                mxMove *= 2;
            }

            //cout<<mxMove;
            start += mxMove;
            ans.push_back(start);
            cnt++;
        }

        //cout<<start<<" "<<power<<" "<<mxMove<<"\n";
    }

    reverse(ans.begin(), ans.end());
    cout<<cnt<<"\n";
    for (auto it: ans){
        cout<<it<<" ";
    }
}
 
int main()
{
    //Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        solve();
        cout<<"\n";
    }

    //cout<<findMSB(2);

    return 0;
}