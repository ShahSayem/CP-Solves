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
        v2.push_back(i+1);
    }

    if (n == 1){
        cout<<-1;
        return;
    }

    for (int i = 0; i < n-1; i++){
        if (v1[i] == v2[i])
            swap(v2[i], v2[i+1]); 
    }
    
    if (v1[n-1] == v2[n-1])
        swap(v2[n-1], v2[n-2]);
    
    for (int i = 0; i < n; i++)
        cout<<v2[i]<<" ";
    
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