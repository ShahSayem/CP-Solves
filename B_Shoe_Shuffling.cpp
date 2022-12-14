#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin>>n;

    vector <int> v;
    int arr[n], brr[n];

    vector <bool> check(n);

    for (int i = 0; i < n; i++){
        cin>>arr[i];
        brr[i] = i+1;
    }

    bool ans = true;

    for (int i = 0; i < n-1; i++){
        if (arr[i] == arr[i+1]){
            v.push_back(brr[i+1]);
            swap(brr[i], brr[i+1]);

            check[i] = true;
            check[i+1] = true;
        }

        else{
            if (check[i]){
                v.push_back(brr[i]);
            }
            else{
                ans = false;
                break;
            }
        }
    }

    if (check[n-1])
        v.push_back(brr[n-1]);
    else
        ans = false;

    if (ans){
        for (int i = 0; i < n; i++){
            cout<<v[i]<<" ";
        } 
    }
    else
        cout<<-1;    
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