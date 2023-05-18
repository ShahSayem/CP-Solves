#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000000;

vector <bool> composite(MAX);
void sieveOfEratosthenes()
{
    composite[0] = true, composite[1] = true;
    for (int i = 2; i*i <= MAX; i++){
        if (!composite[i]){
            for (int j = i*i; j <= MAX; j+=i){
                composite[j] = true;
            } 
        }
    }    
} 

void solve()
{
    sieveOfEratosthenes();
    int n;
    cin>>n;

    ll x, xx;
    for (int i = 0; i < n; i++){
        cin>>x;

        xx = sqrtl(x);

        if (xx*xx == x && !composite[xx])  
            cout<<"YES\n";
        else    
            cout<<"NO\n";      
    }
    
} 
  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
    // }

    return 0;
} 