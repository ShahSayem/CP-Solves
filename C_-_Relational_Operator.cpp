#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m){
    if(n > m){
        cout<<m-n<<endl;
    }
    else if(n < m){
        cout<<m-n<<endl;
    }
    else {
        cout<<0<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        long long n, m;
        cin>>n>>m;

        solve(n, m);
    }
    return 0;
}