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
    int n;
    cin>>n;

    vector <int> div;
    for (int i = 1; i*i <= n; i++){
        if (n%i == 0){
            if (n/i == i){
                div.push_back(i);
            }
            else {
                div.push_back(i);
                div.push_back(n/i);
            }
        }
    }
    
    int x, y, z;
    int sz = div.size(), taken = 0;
    ll curr, oneDiv;
    for (int i = 0; i < sz; i++){
        taken = 0;
        for (int j = 0; j < sz; j++){
            if (i == j)
                continue;

            curr = div[i]*div[j]*1LL;

            if (taken){
                if ((oneDiv*div[j])%n == 0 && n%curr == 0 && n % (div[y]*div[j]*1LL) == 0){
                    cout<<div[x]<<" "<<div[y]<<" "<<div[j];
                    return;
                }
            }
            if (n%curr == 0){
                taken = 1;
                x = i, y = j;
                oneDiv = curr;
            }
        }
    }
    
   cout<<-1;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
