#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> & prices){
    int ans = 0, minPrice = INT_MAX;
    for (int j = 0; j < prices.size(); j++){
        minPrice = min(minPrice, prices[j]);
        ans = max(prices[j]-minPrice, ans);       
    }

    return ans;
}

int main()
{
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