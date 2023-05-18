#include <bits/stdc++.h>
using namespace std;

int c = 1;

int solve(int n, int m){
    int sum = 0;

    for(int i = n; i<=m; i++){
        if(i%2 != 0){
            sum += i;
        }
    }
    cout<<"Case "<<c<<": "<<sum<<endl;
    c++;

    return 0;
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