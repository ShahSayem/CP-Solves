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
    int n, ap = 0, an = 0, abp = 0, abn = 0, bp = 0, bn = 0, op = 0, on = 0;
    while (n--){
        string s;
        getline(cin, s);

        bool entDate = 0, entTime = 0, email = 0, bDate = 0, bGroup = 0;
        string entDate1 = "", entTime1 = "", email1 = "", bDate1 = "", bGroup1 = "";
        map < string, vector <string> > mp;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '#'){
                entDate = 1;
                cout<<entDate1<<" ";
            }
            if (!entDate){
                entDate1 += s[i];
                continue;
            }

            if (s[i] == ' '){
                entTime = 1;
                cout<<entTime1<<" ";
            }
            if (!entTime){
                entTime1 += s[i];
                continue;
            }

            if (s[i] == ' '){
                email = 1;
                cout<<email1<<" ";
            }
            if (!email){
                email1 += s[i];
                continue;
            }

            if (s[i] == ' '){
                bDate = 1;
                cout<<bDate1<<" ";
            }
            if (!bDate){
                bDate1 += s[i];
                continue;
            }

            if (s[i] != ' '){
                bGroup1 += s[i];
            }

            cout<<bGroup1<<" ";
        }

        // if (!mp[email1]){
        //     mp[email1] = {entDate1, entTime1, bDate1, bGroup1};
        // }
        // else if (mp[email1][0] > entDate2){
        //     if (mp[email1][1] > entTime2)
        //         mp[email1] = {entDate1, entTime1, bDate1, bGroup1};
        // }
    }
    
}

int main()
{
    Shah_Sayem

    int t = 1;
    //cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
