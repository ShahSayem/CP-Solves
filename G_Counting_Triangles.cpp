#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, idx, cnt = 0;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n-2; i++){
        for (int j = i+1; j < n-1; j++){
            if (v[n-1] > (v[i]+v[j])){

                // cout<<v[i]<<" "<<v[j]<<"\n";
                continue;
            }

            //cout<<v[i]<<" "<<v[j]<<"\n";
            idx = upper_bound(v.begin(), v.end(), (v[i]+v[j]-1))-v.begin();
            cout<<idx;
            break;
            //idx--;

            if (idx <= 2)
                continue;
                
            //cout<<v[i]<<" "<<v[j]<<"\n";
            cnt += idx;
        }
        break;
    }
    
    idx = upper_bound(v.begin(), v.end(), 9)-v.begin();
    //cout<<idx;

    //cnt*= 3;
    //cout<<cnt;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
