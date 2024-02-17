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
    int n, q, l, r;
    cin>>n;

    vector <int> v(n+1, 0), sumv(n+1);
    for (int i = 1; i <= n; i++){
        cin>>v[i];

        sumv[i] = sumv[i-1]+v[i];
    }
    
    cin>>q;
    ll sum = 0, cnt = 0;
    while (q--){
        cin>>l>>r;

        sum = sumv[r] - sumv[l-1];
        
        if (primeChecker(sum)){
            cnt++;
        }
    }
    
    if (cnt == 0){
        cout<<"Adnan bhai, Priyom dada, Shuvo bhai will forever be single!";
    }
    else {
        cout<<"Sokina Khatun will be";

        if (cnt > 3)
            cnt = 3;
        while (cnt--){
            cout<<" very";
        }
        cout<<" happy!";
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
  
