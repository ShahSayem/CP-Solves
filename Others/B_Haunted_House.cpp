#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, idx, curr = 0;
    cin>>n;

    string s;
    cin>>s;

    bool found1 = 0;
    vector <int> pos;
    map <int, int> mp;
    for (int i = n-1; i >= 0; i--){
        if (s[i] == '1')
            found1 = 1;
            
        if (s[i] == '0' && found1){
            pos.push_back(i);
            mp[i]++;
        }
    }
    
    
    idx = n-1;
    bool check, allowed = 1;
    ll move = 0;
    for (int i = 1; i <= n; i++){
        //curr = 1<<i;

        if (allowed){
            if (s[idx] == '1'){
                check = 0;
                for (int j = curr; j < pos.size(); j++){
                    if (mp[pos[j]]){
                        s[pos[j]] = '1';
                        s[idx] = '0';
                        mp[pos[j]] = 0;

                        curr = j+1;
                        move += (idx - pos[j]);
                        check = 1;

                        break;
                    }
                }
                
            }
            else {
                check = 1;
            }

            idx--;
        }

        if (check && allowed)
            cout<<move<<" ";
        else {
            cout<<-1<<" ";
            allowed = 0;
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
