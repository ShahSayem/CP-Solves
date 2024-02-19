#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    char tramp;
    cin>>tramp;

    string x;
    priority_queue < string, vector <string>, greater <string> > tramps;
    map < char, vector <string> > mp;
    for (int i = 0; i < 2*n; i++){
        cin>>x;

        if (x[1] == tramp){
            tramps.push(x);
        }
        else 
            mp[x[1]].push_back(x);
    }


    vector <string> ans;
    for (auto &&i : mp){
        sort(i.second.begin(), i.second.end());
        for (auto &&it : i.second){
            ans.push_back(it);
        }
        
        if (int(ans.size()) & 1){
            if (!tramps.empty()){
                ans.push_back(tramps.top());
                tramps.pop();
            }
            else {
                cout<<"IMPOSSIBLE\n";
                return;
            }
        }
    }  

    while (!tramps.empty()){
        ans.push_back(tramps.top());
        tramps.pop();
    }

    for (int i = 0; i < 2*n; i+=2){
        cout<<ans[i]<<" "<<ans[i+1]<<"\n";
    }  
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
