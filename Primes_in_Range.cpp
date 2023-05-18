#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

bool primeChecker (ll n)
{
    if(n==0 || n==1)
        return false;
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }

    return true;
}

void solve()
{
    int l, r, cnt = 0;
    cin>>l>>r;

        
    for (int i = l; i <= r; i++){
        if (primeChecker(i))
            cnt++;
    }
    
    cout<<cnt;
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
  
