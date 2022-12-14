#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll cntLessThanOrEq(int n, int m, ll k){
    ll cnt = 0; 
    for (int i = 1; i <= n; i++){
        cnt += min(1LL*m, k/i);
    }
    
    return cnt; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    ll k;
    cin>>n>>m>>k;

    ll l = 1, r = 1LL*n*m;
    while (l<r){
        ll mid = l+(r-l)/2;

        if (cntLessThanOrEq(n, m, mid) < k)
            l = mid+1;
        else
            r = mid;
    }
    
    cout<<l<<"\n";

    return 0;
} 
  
