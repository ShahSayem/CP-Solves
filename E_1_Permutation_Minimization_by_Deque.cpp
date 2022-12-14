#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve(){
    int n, j;
    cin>>n;

    deque <int> dq;

    cin>>j;
    dq.push_back(j);

    for (int i = 1; i < n; i++){
        cin>>j;

        if (dq.front() < j)
            dq.push_back(j);
        else 
            dq.push_front(j);
    }
    
    for (auto x:dq)
        cout<<x<<" ";
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
  
