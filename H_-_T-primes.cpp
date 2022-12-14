#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

bool v[10000000];

void sieve()
{
    v[0] = v[1] = true;
    for (int i = 2; i*i <= 10000000; i++){
        if (!v[i]){
            for (int j = i*i; j <= 10000000; j+=i){
                v[j] = true;
            } 
        }
    }

}

int main()
{
    sieve();
    
    ll n, a;
    cin>>n;
    while (n--){
        cin>>a;
        ll sq = sqrt(a);

        if (sq*sq == a && !v[sq]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
}
    