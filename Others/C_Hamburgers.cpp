#include <bits/stdc++.h>
#define ll long long
using namespace std;

int nb, ns, nc, pb, ps, pc;
int cb, cs, cc;
ll fb, fs, fc;

ll price(ll y){
    fb = max(y*cb-nb, 0LL);
    fs = max(y*cs-ns, 0LL);
    fc = max(y*cc-nc, 0LL);

    ll p = fb*pb + fs*ps + fc*pc;

    return p;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;

    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;

    ll r;
    cin>>r;

    cb = count(s.begin(), s.end(), 'B');
    cs = count(s.begin(), s.end(), 'S');
    cc = count(s.begin(), s.end(), 'C');

    ll low = 0, high = r+100, mid, x, ans = 0;

    while (low <= high){
        mid = low + (high-low)/2;

        x = price(mid);

        if (x == r){
            cout<<mid<<"\n";

            return 0;
        }

        if (x > r)
            high = mid-1;

        else {
            low = mid+1;
            ans = mid;
        }
    }
    
    cout<<ans<<"\n";

    return 0;
} 
  
