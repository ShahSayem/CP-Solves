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
    string s, ans = "";
    cin>>s;

    stack <int> upp, low;
    int idx = 0, n = s.size();
    for (int i = 0; i < n; i++){
        if (s[i] == 'B'){
            //cout<<"B "<<upp.size()<<"\n";
            if (!(upp.empty())){
                s[upp.top()] = '#';
                upp.pop();

                //cout<<i<<"x\n";
            }

            s[i] = '#';
        }
        else if (s[i] == 'b'){
            //cout<<"b "<<low.size()<<"\n";
            if (!(low.empty())){
                s[low.top()] = '#';
                low.pop();

                //cout<<i<<"y\n";
            }

            s[i] = '#';
        }

        if (s[i] != 'B' && (s[i] >= 'A' && s[i] <= 'Z')){
            upp.push(i);

            //cout<<i<<"x\n";
        }
        else if (s[i] != 'b' && (s[i] >= 'a' && s[i] <= 'z')){
            low.push(i);

            //cout<<i<<"y\n";
        }
    }
    
    for (int i = 0; i < n; i++){
        if (s[i] != '#')
            cout<<s[i];
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
