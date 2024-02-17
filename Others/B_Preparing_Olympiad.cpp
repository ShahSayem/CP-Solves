#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
int n, l, r, x;

int powerSet(vector <int> &v)
{
    int cnt = 0;
    ll curr, total, sz, checkX;

    for (int i = 0; i < (1<<n); i++){
        curr = i;
        total = 0;
        vector <int> currSubSeq;
        for (int j = 0; j < n; j++){
            if (curr & (1<<j)){
                currSubSeq.push_back(v[j]);

                total += v[j];
            }
        }
        
        sz = currSubSeq.size();
        if (sz == 1){
            checkX = currSubSeq[0];
        }
        else if (sz == 0){
            continue;
        }
        else {
            checkX = (currSubSeq[sz-1]-currSubSeq[0]);
        }

        if ((sz >= 2) && (total >= l) && (total <= r) && (checkX >= x)){
            cnt++;
        }    
    }
    
    return cnt;
}

void solve()
{
    cin>>n>>l>>r>>x;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }  

    sort(v.begin(), v.end());
    int val = powerSet(v);

    cout<<val;
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
