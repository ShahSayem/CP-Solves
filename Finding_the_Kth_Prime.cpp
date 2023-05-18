#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

vector <int> prime;
bool v[90000001];

void sieve()
{
    v[0] = v[1] = true;
    for (int i = 2; i*i <= 90000001; i++){
        if (!v[i]){
            for (int j = i*i; j <= 90000001; j+=i){
                v[j] = true;
            } 
        }
    }

    for (int i = 2; i <= 90000001; i++){
        if (!v[i]){
            prime.push_back(i);
        } 
    }

}

int main()
{
    int t, n;
    cin>>t;

    sieve();
    while (t--){
        cin>>n;
        cout<<prime[n-1]<<endl;   
    }
    
    return 0;
}
    