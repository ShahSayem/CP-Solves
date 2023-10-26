#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

vector <bool> composite(MAX+1);
vector <int> primeLsit;

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
            primeLsit.push_back(i);
    }  
} 

void solve()
{
    int n, k, cnt = 0, curr;
    cin>>n>>k;

    for (int j = 0; j < primeLsit.size(); j++){
        curr = primeLsit[j] + primeLsit[j+1] + 1;
        if (!composite[curr] && curr <= n){
            cnt++;
        }

        if (cnt >= k){
            cout<<"YES";
            return;
        }
    }
    
    cout<<"NO";
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
