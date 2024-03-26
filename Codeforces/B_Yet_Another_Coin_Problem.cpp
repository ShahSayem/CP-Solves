#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e3+5;
int dp[MAX];

vector <int> coins = {15, 10, 6, 3, 1};

int minNoOfCoin(int x)
{
    if (x == 0)
        return 0;
 
    if (x < 0)
        return -1;
 
    if (dp[x] != 1e9)
        return dp[x];
 
    int ans = 1e9, val;
    for (int i = 0; i < 5; i++){
        val = minNoOfCoin(x-coins[i]);
 
        if (val != -1)
            ans = min(val+1, ans); //as I calculate for x-coins[i] t.k that means 
    }                             //for x tk I have to take val+1 coin
                                 //where the extra coin is coins[i]
    if (ans == 1e9)
        ans = -1;
 
    return dp[x] = ans;
}
 
void solve()
{
    for (int i = 0; i < MAX; i++){
        dp[i] = 1e9; //as we finding min 
    }               //initally we take MAX at every case
    
    int n;
    cin>>n;
    
    int curr15 = 0;
    if (n > 1e3){
        curr15 = n / 15;
        curr15 -= 50;

        n -= (curr15 * 15); 
    }

    cout<<minNoOfCoin(n)+curr15;
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
