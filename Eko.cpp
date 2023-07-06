#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 1000005;
int trees[MAX], n, mx;
ll m;

bool isWoodSufficient(int hight)
{
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (hight < trees[i])
            sum += (trees[i]-hight);
    }
    
    if (sum >= m)
        return true;
    else
        return false;
}

int maxHight()  //return last occurance of True (highest possible hight)
{ 
    int l = 0, r = mx, mid;    
                             
    while (l <= r){
        mid = l+(r-l)/2;

        if (isWoodSufficient(mid))
            l = mid+1;
        else 
            r = mid-1;
    }

    return r;
}

int main()
{
    cin>>n>>m;
    mx = 0;
    for (int i = 0; i < n; i++){
        cin>>trees[i];

        mx = max(trees[i], mx);
    }
    
    int ans = maxHight();
    cout<<ans<<"\n";

    return 0;
} 
  
