#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    int n;
    cin>>n;

    double sum =  0;
    vector <double> v;
    for (int i = 0; i < n; i++){
        double j;
        cin>>j;
        v.push_back(j);
        sum += v[i];
    }

    for (int i = 0; i < n; i++){
        if ((sum-v[i])/(n-1) == v[i]){
            cout<<"YES";
            return;
        }
    }   
    cout<<"NO";
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<"\n";     
    }
    
    return 0;
}
    