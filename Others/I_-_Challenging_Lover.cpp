#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;

bool primeChecker (ll n)
{
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }

    return true;
}

void solve()
{
    ll n, sum = 0;
    cin>>n;

    for (int i = 1; i <= n; i++){
      if (n%i == 0){
        sum += i;
      }
    }
    
    if (primeChecker(sum))
        cout<<"Yes";
    else
        cout<<"No";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        ll n, sum = 0;
        cin>>n;

        for (int i = 1; i <= n; i++){
            if (n%i == 0){
            sum += i;
            }
        }

        int i = 0;
        bool check = true;
        for ( i = 2; i*i <= sum; i++){
            if (sum%i == 0){
                cout<<"No";
                check = false;
                break;
            }
        }

        if (check)
            cout<<"Yes";

        cout<<"\n";
    }

    return 0;
} 
  
