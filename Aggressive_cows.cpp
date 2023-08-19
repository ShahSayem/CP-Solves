#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 1000005;
int positions[MAX], n, c, mx;

bool canPlaceCows(int minDist)
{
    int lastPos = -1, cntCows = c;
    for (int i = 0; i < n; i++){
        if ((positions[i] - lastPos >= minDist) || lastPos == -1){
            cntCows--;
            lastPos = positions[i];
        }

        if (!cntCows)
            return true; //I can place all cows
    }

    return false;
}

int maxDist()  //return last occurance of True (highest possible min_distance)
{             //O(Nlog(10^9))
    int l = 0, r = mx, mid;    
    //T T T T T T T F F F F F                     
    while (l <= r){
        mid = l+(r-l)/2;

        if (canPlaceCows(mid))
            l = mid+1;
        else 
            r = mid-1;
    }

    return r;
}

int main()
{
    int tc;
    cin>>tc;

    while (tc--){
        cin>>n>>c;

        mx = 0;
        for (int i = 0; i < n; i++){
            cin>>positions[i];

            mx = max(positions[i], mx);
        }
        sort(positions, positions+n);

        int ans = maxDist();
        cout<<ans<<"\n";
    }

    return 0;
} 
  
