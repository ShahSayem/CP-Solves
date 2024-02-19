#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

vector <int> primeList;
vector <bool> composite(700+1);
void sieveOfEratosthenes()
{
    composite[0] = true, composite[1] = true;
    for (int i = 2; i*i <= 700; i++){
        if (!composite[i]){
            for (int j = i*i; j <= 700; j+=i){
                composite[j] = true;
            } 
        }
    } 

    for (int i = 0; i <= 700; i++){
        if (!composite[i]){
            primeList.push_back(i);
            //cout<<i<<" ";
        }    
    } 
} 

void solve()
{
    int n, x, diff, highPrime;
    cin>>n;

    if (n == 1){
        cout<<1;
        return;
    }

    x = n*n;
    highPrime = upper_bound(primeList.begin(), primeList.end(), x)-primeList.begin();
    highPrime--;
    highPrime = primeList[highPrime];

    diff = x - highPrime;

    int cnt = diff;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (__gcd(i, diff) == 1 && __gcd(j, diff) == 1 && cnt){
                cout<<diff;
                cnt--;
            }
            else {
                cout<<highPrime;
            }

            if (j != n){
                cout<<" ";
            }
        }

        if (i != n){
            cout<<"\n";
        }
    }  
}

int main()
{
    Shah_Sayem

    sieveOfEratosthenes();
    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
