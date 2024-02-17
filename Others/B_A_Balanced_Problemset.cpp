#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int x, n, curr, ans = 1, mx;
    cin>>x>>n;

    mx = x/n;

    vector <int> div;
    for (int i = 1; i*i <= x; i++){
        if (x%i == 0){
            div.push_back(i);

            if ((i*i) != x)
                div.push_back(x/i);
        }    
    }
    sort(div.begin(), div.end());

    for (auto it : div){
        if (it <= mx)
            ans = it;
        else 
            break;
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
