#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, check = 0;
    cin>>n;

    string s;
    cin>>s;

    int cnt0 = 0, cnt1 = 0, x = 300;
    vector <int> ans;
    while (x--){
        n = s.size();
        check = 1;
        for (int i = 0; i <= n/2; i++){
            if (s[i] == s[n-i-1]){
                check = 0;

                if (s[i] == '0'){
                    ans.push_back(n-i);
                    s.insert(n-i, "01");
                }
                else {
                    ans.push_back(i);
                    s.insert(i, "01");
                }

                break;
            }
        }

        if (check)
            break;    
    }

    if (!check){
        cout<<-1;
    }
    else {
        cout<<ans.size()<<"\n";
        for (auto it : ans){
            cout<<it<<" ";
        }
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
