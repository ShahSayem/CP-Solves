#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
int mx, k;

bool isPossible(int target, vector <int> &v){
    if (target <= mx)
        return true;

    int n = v.size(), idx, rem, currTarget;
    for (int i = 0; i < n-1; i++){
        idx = i;
        rem  = k;
        currTarget = target;

        while (true){
            if (idx == n || rem < 0)
                break;

            if (v[idx] >= currTarget)
                return true;

            rem -= (currTarget-v[idx]);
            idx++;
            currTarget--;
        }
    }
    
    return false;
}
 
int getVal(vector <int> &v)
{
    int l = 1, r = mx+k, mid;
    while (l <= r){
        mid = l+(r-l)/2;
 
        if (isPossible(mid, v))
            l = mid+1;
        else 
            r = mid-1;
    }

    return r;
}

void solve()
{
    int n;
    cin>>n>>k;

    mx = 0;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        mx = max(v[i], mx);
    }
    
    cout<<getVal(v);
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
