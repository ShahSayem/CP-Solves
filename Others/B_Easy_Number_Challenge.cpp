#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1073741824;
const int MAX = 1000000+5;

int main()
{
    Shah_Sayem

    int a, b, c, n;
    cin>>a>>b>>c; 

    vector <int> cnt(MAX+1, 1), divCount(MAX+1, 0);
    for (int i = 1; i <= MAX; i++){
        for (int j = i; j <= MAX; j+=i){
            divCount[j] += 1;
        }  
    } 

    int sum = 0;
    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= b; j++){
            for (int k = 1; k <= c; k++){
                n = 1;
                n *= (i*j*k);

                sum += divCount[n];
                sum %= MOD;
            }
        }
    }

    cout<<sum;

    return 0;
}
