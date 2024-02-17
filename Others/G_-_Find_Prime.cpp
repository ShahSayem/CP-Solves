#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

bool findPrime (int n){
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;

    int x = n+1, y = n-1;

    while (findPrime(x) != true){
        x++;
    }

    while (findPrime(y) != true){
        y--;
    }   

    cout<<y<<" "<<x;
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
  
