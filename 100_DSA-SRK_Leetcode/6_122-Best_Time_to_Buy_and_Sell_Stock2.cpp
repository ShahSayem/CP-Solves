#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> & prices){
    int ans = 0;
    for (int i = 1; i < prices.size(); i++){
        if (prices[i] > prices[i-1])
            ans += (prices[i] - prices[i-1]);
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector <int> prices;
    int x;
    int i = 0;
    while (cin>>x){
        prices.push_back(x);
        i++;
    }

    cout<<solve(prices)<<endl;
    
    return 0;
}