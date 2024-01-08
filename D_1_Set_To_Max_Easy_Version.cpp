#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, check = 1;
    cin>>n;

    vector <int> a(n), b(n);
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    for (int i = 0; i < n; i++){
        cin>>b[i];

        if (a[i] > b[i]){
            check = 0;
        }
    }

    if (!check){
        cout<<"NO";
        return;
    }

    for (int i = 0; i < n; i++){
        check = 0; 
        for (int j = i; j < n; j++){
            if (a[j] == b[i]){
                check = 1;
                break;
            }

            if ((a[j] > b[i]) || (b[j] < b[i]))
                break;
        }
            
        for (int j = i; j >= 0; j--){
            if (a[j] == b[i]){
                check = 1;
                break;
            }

            if ((a[j] > b[i]) || (b[j] < b[i]))
                break;
        }

        if (!check){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
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
