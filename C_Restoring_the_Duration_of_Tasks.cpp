#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector <int> v1, v2;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        v1.push_back(j);
    }

    for (int k = 0; k < n; k++){
        int j;
        cin>>j;
        v2.push_back(j);

        if (v2[k-1] > v1[k] && k > 0){
            cout<<v2[k]-v2[k-1]<<" ";
        }
        else
            cout<<v2[k]-v1[k]<<" ";
    }
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