#include <bits/stdc++.h>
using namespace std;

void solve(int x){
    int ans = ((x*(x+1))*(2*x+1))/6;
    cout<<ans<<endl;
}
int main()
{
    int t;
    while(cin>>t){
        if(t == 0){
            return 0;
        }
        solve(t);
    }
    
    return 0;
}