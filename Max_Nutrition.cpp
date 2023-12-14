#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, ans = 0, curr;
    cin>>n;
            //  type   value
    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++){
        cin>>b[i];
    }

    map <int, int> mp;
    for (int i = 0; i < n; i++){
        curr = 0;
        if (!mp[a[i]] && b[i] > 0){
            for (int j = i; j < n; j++){
                if (a[i] == a[j])
                    curr = max(curr, b[j]);
            }

            ans += curr;
            mp[a[i]]++;
        }
    }

    cout<<ans;
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
