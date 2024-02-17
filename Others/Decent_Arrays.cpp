#include <iostream>
#include <vector>
using namespace std;


void solve()
{
    int n, k;
    cin>>n;

    vector <int> v(n), vec;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    for (int i = 1; i < n; i++){
        if (v[i] < v[i-1]){
            cout<<"No";
            return;
        }
    }
    
    cout<<"Yes";
}

int main()
{
    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
