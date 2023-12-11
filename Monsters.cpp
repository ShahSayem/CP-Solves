#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e6+5;

vector <bool> composite(MAX+5);
vector <int> primes, sums(21);

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

    for (int i = 0; i < MAX; i++){
        if (!composite[i])
            primes.push_back(i);
    }

    //Generating series sum
    int curr = 1;
    for (int i = 1; i < 21; i++){
        sums[i] = sums[i-1] + curr;
        curr *= 2;
    } 
} 

void solve()
{
    int h, idx = -1;
    cin>>h;
    
    idx = lower_bound(primes.begin(), primes.end(), h) - primes.begin();
    if (primes[idx] == h){
        cout<<1;
        return;
    }
    else {
        idx--;
    }

    int x, check = 0, ans = INT_MAX, z;
    z = lower_bound(sums.begin(), sums.end(), h)-sums.begin();
    if (sums[z] == h)
        ans = z;
    
    for (int i = idx; i >= 0; i--){
        x = h-primes[i];
        if (binary_search(sums.begin(), sums.end(), x)){
            z = lower_bound(sums.begin(), sums.end(), x)-sums.begin()+1;
            ans = min(z, ans);
            cout<<ans;
            return;
        }
    }

    if (ans == INT_MAX)
        cout<<-1;
    else    
        cout<<ans;
}

int main()
{
    Shah_Sayem

    sieveOfEratosthenes();
    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
