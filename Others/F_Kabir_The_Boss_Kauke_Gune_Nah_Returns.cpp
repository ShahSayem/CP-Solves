#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, x, pos, cnt = 0, ans = -1;
    cin>>n;

    vector <int> v(n), temp;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    if (is_sorted(v.begin(), v.end())){
        cout<<-1;

        return;
    }
    
    for (int i = 0; i < n-1; i++){
        cin>>v[i];

        if (v[i] > v[i+1]){
            temp = v;
            pos = i;

            temp.erase(temp.begin()+pos);

            if (is_sorted(temp.begin(), temp.end())){
                cnt++;

                ans = pos;
            }

            //Checking next elem
            temp = v;
            pos = i+1;

            temp.erase(temp.begin()+pos);

            if (is_sorted(temp.begin(), temp.end())){
                cnt++;

                ans = pos;
            }
        }    

        if (cnt > 1){
            cout<<-1;

            return;
        }
    }

    cout<<ans+1;
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

