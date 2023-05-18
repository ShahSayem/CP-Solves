#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 100000000;

vector <bool> composite(MAX);
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
} 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    sieveOfEratosthenes();

    int cnt = 0;
    for (int i = 1; i < MAX; i++){
        if (!composite[i]){
            cnt++;
            if (cnt%100 == 1)
                cout<<i<<"\n";
        }
    }
    


    return 0;
} 