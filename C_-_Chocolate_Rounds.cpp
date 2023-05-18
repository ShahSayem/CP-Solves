#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+2;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

vector <int> pre(MAX);

vector <bool> composite(MAX);
void sieveOfEratosthenes()
{
    composite[0] = true;
    for (int i = 2; i*i <= MAX; i++){
        if (!composite[i]){
            for (int j = i*i; j <= MAX; j+=i){
                composite[j] = true;
            } 
        }
    }    
} 

void solve()
{
    int n;
    scanf("%d", &n);

    int cnt = 0;
    while (n > 0){
        n -= pre[n];
        cnt++;
    }
    
    printf("%d", cnt);
}

int main()
{
    Shah_Sayem
    sieveOfEratosthenes();

    int cnt = 0;
    for (int i = 0; i <= MAX; i++){
        if (!composite[i])
            cnt++; 

        pre[i] = cnt; 
    }

    int t = 1;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        printf("Case %d: ", i);
        solve();
        printf("\n");
    }

    return 0;
}
