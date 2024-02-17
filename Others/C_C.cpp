#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 2e5+5;
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, m, x;
    cin>>n>>m;

    ll sumA = 0, sumB = 0;
    //vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>x;

        sumA += x;
    }

    for (int i = 0; i < m; i++){
        cin>>x;

        sumB += x;
    }

    if (n > m){
        if (sumA >= sumB){
            cout<<"ALICE";
        }
        else {
            cout<<"BOB";
        }
    }
    else if (n == m){
        if (sumA > sumB){
            cout<<"ALICE";
        }
        else if (sumA == sumB){
            cout<<"TIED";
        }
        else {
            cout<<"BOB";
        }
    }
    else {
        if (sumA < sumB){
            cout<<"BOB";
        }
        else {
            cout<<"ALICE";
        }
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
