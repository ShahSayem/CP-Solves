#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
int n, m, q;

struct two{
    int f, s;
};

vector <int> query;
vector <two> seg;

bool isBeautiful(int mid)
{
    int change[n+1] = {0};
    for (int i = 0; i < mid; i++){
        change[query[i]] = 1;
    }
    
    int preSum[n+1];
    preSum[0] = 0;
    for (int i = 1; i <= n; i++){
        preSum[i] = preSum[i-1]+change[i];
    }
    
    int cnt1, segSize;
    for (int i = 0; i < m; i++){
        cnt1 = preSum[seg[i].s]-preSum[seg[i].f-1];
        segSize = seg[i].s-seg[i].f+1;
                   
        if (cnt1 > segSize/2)
            return true;
    }
    return false;
}

int firstBeauty()  //return first occurance of True (lowest possible query)
{ 
    int l = 1, r = q, mid;    
                             
    while (l <= r){
        mid = l+(r-l)/2;

        if (!isBeautiful(mid))
            l = mid+1;
        else 
            r = mid-1;
    }

    return l;
}


int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        int l, r;
        cin>>n>>m;

        seg.clear();
        for (int i = 0; i < m; i++){
            cin>>l>>r;
            seg.push_back({l, r});
        }

        cin>>q;
        query.clear();
        query.resize(q);
        for (int i = 0; i < q; i++){
            cin>>query[i];
        }

        int ans = firstBeauty();
        if (ans > q)
            cout<<-1<<"\n";
        else
            cout<<ans<<"\n";
    }

    return 0;
}
