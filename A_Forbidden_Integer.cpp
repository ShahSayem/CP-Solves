#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, k, x, sum = 0; //1-k except x
    cin>>n>>k>>x;

    if (x != 1){
        cout<<"YES\n";
        cout<<n<<"\n";
        for (int i = 1; i <= n; i++){
            cout<<1<<" ";
        }
    }
    else if ( n == 1){
        cout<<"NO";
    }
    else if (k == 2){
        if (n%2 == 0){
            cout<<"YES\n"; 
            cout<<n/2<<"\n"; 
            for (int i = 1; i <= n/2; i++){
                cout<<2<<" ";
            }
        }
        else {
            cout<<"NO";
        }
    }
    else if (k >= 3){
        cout<<"YES\n";
        
        if (n%2){
            if (n == 3)
                cout<<1<<"\n";
            else 
                cout<<((n-3)/2)+1<<"\n";

            cout<<3<<" ";

            int sum = 3;
            while (sum != n){
                sum += 2;
                cout<<2<<" ";
            }
        }
        else if (n%2 == 0){
            cout<<n/2<<"\n";
            for (int i = 1; i <= n/2; i++){
                cout<<2<<" ";
            }
        }
    }
    else {
        cout<<"NO";
    }
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
