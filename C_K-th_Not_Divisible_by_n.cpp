#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;

    int l = 1, r = INT_MAX, mid, cntLessThanOrEq;
    while (l<r){
        mid = l+(r-l)/2;
        cntLessThanOrEq = mid-(mid/n);

        if (cntLessThanOrEq < k)
            l = mid+1;
        else
            r = mid;
    }
    
    cout<<l;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
} 
  
