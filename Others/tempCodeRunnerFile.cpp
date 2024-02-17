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
    ll n;
    cin >> n;
 
    vector<string> a(n);
    vector<ll> v(n);
 
    for (int i = 0; i < n; i++){
        cin >> a[i];
        v[i] = stoll(a[i]);
    }
 
    int sz, temp;
    string curr;
    for (int i = 0; i < n; i++){
        curr = a[i];
        temp = v[i];
        sz = curr.size();
 
        // 0 or 1
        if (count(curr.begin(), curr.end(), '0') == (sz - 1)){
            // a[i] = "0";
            v[0] = 0;
        }
        else{
            curr[0] = '1';
            // a[i] = curr;
            v[i] = stoll(curr);
        }
 
        if (!is_sorted(v.begin(), v.end())){
            for (auto &&it : v){
                cout << it << " ";
            }
            return;
        }
 
        curr[0] = '9';
        // a[i] = curr;
        v[i] = stoll(curr);
 
        if (!is_sorted(v.begin(), v.end())){
            for (auto &&it : v){
                cout << it << " ";
            }
            return;
        }
 
        v[i] = temp;
    }
 
    cout << "impossible";    
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
