#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
int sum, n, reach, correct;
string a, b;
//int dp[15][10000];

ll ways(int idx, int currAns)
{
    if (idx == -1){
        reach++;

        if (currAns == sum)
            return 1;

        return 0;
    }

    // if (dp[idx][currAns] != -1)
    //     return dp[idx][currAns];
        
    ll add = 0;
    if (b[idx] == '+')
       add += ways(idx-1, currAns+1);
    else if (b[idx] == '-')
       add += ways(idx-1, currAns-1);
    else {
       add += (ways(idx-1, currAns+1) + ways(idx-1, currAns-1));
    }

    //return dp[idx][currAns] = add;
    return add;
}

void solve()
{
    //memset(dp, -1, sizeof(dp));
    cin>>a>>b;
    n = a.size();
    for (int i = 0; i < n; i++){
        if (a[i] == '+')
            sum++;
        else 
            sum--;
    }
    
    correct = ways(n-1, 0);
    //cout<<correct<<" "<<reach;

    cout<<setprecision(11)<<double(correct)/reach;
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
