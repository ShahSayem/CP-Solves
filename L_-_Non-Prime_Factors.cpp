#include <bits/stdc++.h>
#define   ll   long long
using namespace std;
 
vector <int> prime;
bool v[2000001];
 
void sieve()
{
    v[0] = v[1] = true;
    for (int i = 2; i*i <= 2000001; i++){
        if (!v[i]){
            for (int j = i*i; j <= 2000001; j+=i){
                v[j] = true;
            } 
        }
    }
 
    // for (int i = 2; i <= 90000001; i++){
    //     if (!v[i]){
    //         prime.push_back(i);
    //     } 
    // }
}

int main()
{
    ll t, n, cnt = 0;
    cin>>t;
 
    sieve();
    while (t--){
        cin>>n;

        for (ll i = 1; i*i <= n; i++){
        if (n%i == 0 && v[i]){
            cnt++;

            ll b = n/i;
            if (i != b && v[b]){
                cnt++;
            }
        }     
    }
    cout<<cnt<<endl;
    }
    
    return 0;
}
