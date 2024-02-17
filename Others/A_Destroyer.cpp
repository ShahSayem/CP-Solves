#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.rbegin(), v.rend());

    if (n == 1 && v[0] != 0){
        cout<<"NO";
        return;
    }
    
    int x;
    for (int i = 0; i < n-1; i++){
        x = v[i]; //1
        if (x == -1){
            continue;
        }
        for (int j = i+1; j < n; j++){      //2 2 -1 -1 1 -1 -1 -1 0
            if (v[j] == x-1){               // 0 == 0 (1-1)
                v[j] = -1;
                x--;            //  3 -> 2
            }                   //  2 -> 1   
                                //  1 -> 0
            if (x == 0)
                break;          // 0 1 2...
        }

        if (x != 0){
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
