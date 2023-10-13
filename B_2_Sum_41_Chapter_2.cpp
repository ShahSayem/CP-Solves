#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int p;
    cin>>p;

    vector <int> ans;
    ll sum = 0;
    for (int i = 41; i >= 2; i--){
        while (p%i == 0){
            if (sum+i <= 41){
                ans.push_back(i);
                p = p/i;

                sum += i;
            }
            else 
                break;
        }
    }
    
    if (p > 1){
        cout<<-1;
    }
    else {
        cout<<ans.size()<<" ";
        for (auto it : ans){
            cout<<it<<" ";
        }   
    }
}

int main()
{
    //Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
