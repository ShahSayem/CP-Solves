#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    int n;
    ll mx = 0, len;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++){
        len = 0;
        for (int j = i; j < n; j++){
            if (arr[j] >= arr[i])
                len++;
            else 
                break;
        }
        for (int j = i-1; j >= 0; j--){
            if (arr[j] >= arr[i])
                len++;
            else 
                break;
        }
        mx = max(len*arr[i], mx);
    }

    cout<<mx;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
