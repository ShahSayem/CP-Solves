#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector <int> noOfWays;
    for (int i = 2; i < n; i+=2){
        if (s[i-2] == s[i-1]){
            if (s[i-2] == '1'){
                if (s[i] == '1'){
                    noOfWays.push_back(2);
                }
                else {
                    noOfWays.push_back(1);
                }
            }
            else {
                if (s[i] == '1'){
                    noOfWays.push_back(0);
                }
                else {
                    noOfWays.push_back(3);
                }
            }
        }
        else {
            if (s[i] == '1'){
                noOfWays.push_back(2);
            }
            else {
                noOfWays.push_back(1);
            }
        }
    }
    
    ll combination = 1;
    for (auto it : noOfWays){
        combination = ((combination % MOD) * (it%MOD)) % MOD;
    }
    
    cout<<combination;
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
