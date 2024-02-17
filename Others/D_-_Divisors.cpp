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

vector <bool> v(505);

void seive()
{
    v[1] = true;
    for (int i = 2; i*i <= 505; i++){
        if (!v[i]){
            for (int j = i*i; j <= 505; j+=i){
                v[j] = true;
            } 
        }
    }    
}

void solve()
{
    int l, r, cnt = 0;
    cin>>l>>r;

    for (int i = l; i <= r; i++){
        if (!v[i]){
            cnt++;
        }
    }

    cout<<"There are "<<cnt<<" numbers between "<<l<<" and "<<r<<".\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, x = 0;
    cin>>t;

    seive();

    while (t--){
        x++;
        cout<<"Case "<<x<<": ";
        solve();
    }


    return 0;
} 
  
