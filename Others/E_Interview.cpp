#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()    // interactive problem
{
    int n;
    cin>>n;

    vector <int> v(n+1);
    for (int i = 1; i <= n; i++){
        cin>>v[i];
    }

    int l = 1, h = n, ans, mid, len, x;
    ll sum;
    while (l <= h){
        mid = (l+h)/2;
        len = mid-l+1;

        if (l == h){
            ans = mid;
            break;
        }

        sum = 0;
        cout<<"? "<<len<<" ";
        for (int i = l; i <= mid; i++){
            cout<<i<<" ";

            sum += v[i];
        }
        cout<<endl;

        cin>>x;
        if (x > sum)
            h = mid;
        else 
            l = mid+1;
    }
    
    cout<<"! "<<ans<<endl;  
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
