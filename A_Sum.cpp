#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int arr[3];
    for (int i = 0; i < 3; i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+3);

    if (arr[2] == arr[0]+arr[1])
        cout<<"YES";
    else 
        cout<<"NO";
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
