#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

bool primeChecker (ll n)
{
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }

    return true;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;  

    bool check = primeChecker(n); 

    if (check)
        cout<<"NO PUNISHMENT";
    else {
        while (n--){
            cout<<"I DID NOT DO THE ASSIGNMENT.\n";
        }
        
    }

    return 0;
} 
  
