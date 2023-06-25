#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    string a, b;
    cin>>a>>b;

    int n = a.size(), m = b.size();
    int pos = n-m, temp, cnt = 0;
    ll ans = 0;

    if (a == b){ // equals
        ans = 0;
    }
    else if (n != m){   //not same size
        if (m > n){
            swap(a, b);
            swap(n, m);
        }
        pos = n-m;

        int i = pos, j = 0;
        for (; j < m; i++, j++){
            if (a[i] != b[j]){
                pos = i;
                break;
            }
        }

        if (i != 0){
            a[i] = '0';
            b[j] = '9';
        }
        ans += abs(a[i]-b[j]);
        for (int i = pos+1; i < n; i++){
            ans += 9;
        }

        pos = n-m;
        for (int i = 0; i < pos; i++){
            temp = a[i]-'0';
            ans += temp;
        }
    }
    else {  //same size && not equal
        for (int i = 0; i < n; i++){
            if (a[i] != b[i]){
                pos = i;
                break;
            }
        }

        ans += abs(a[pos]-b[pos]);
        for (int i = pos+1; i < n; i++){
            ans += 9;
        }
    }

    cout<<ans;
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
