#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 1e9;
vector <int> v;

void solve()
{
    int n;
    cin>>n;
    
    if (n <= v.size()){
        cout<<"YES\n";
        for (int i = 0; i < n; i++){
            cout<<v[i]<<" ";
        }
    }  
    else {
        cout<<"NO";
    }  
}

int main()
{
    Shah_Sayem

    int tc = 1, i = 1;
    cin>>tc;

    ll curr;
    v.push_back(1);
    curr = 1;
    while (true){
        curr*=3;

        if (curr > MAX)
            break;

        v.push_back(curr);
        i++;
    }

    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
