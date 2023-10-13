#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
ll up = 0, num = 0, sz, n, mn = 1e11;


ll mnLuckyFind(int curr)
{
    vector <int> temp;
    vector < vector <int> > ans;
    for (int i = 0; i < n; i++){
        if (i < n/2)
            temp.push_back(4);
        else 
            temp.push_back(7);
    }

    do {
        ans.push_back(temp);
    } while (next_permutation(temp.begin(), temp.end()));

    for (auto v : ans){
        ll currNum = 0;
        for (auto it : v){
            currNum = (currNum*10LL) + it;
        }

        if (currNum >= num){
            mn = min(currNum, mn);

            return mn;
        }    
    }

    return mn;   
}

void solve()
{
    string s;
    cin>>s;

    n = s.size();
    sz = n;

    if (n & 1)
        n++;

    for (auto it : s){
        num = (num*10) + (it-'0');
    }

    for (int i = 0; i < n; i++){
        if (i < n/2)
            up = (up*10) + 7;
        else 
            up = (up*10) + 4;
    }
    
    if (up < num){
        up = 0;
        if (n & 1)
            n++;
        else 
            n+=2;

        for (int i = 0; i < n; i++){
            if (i < n/2)
                up = (up*10) + 4;
            else 
                up = (up*10) + 7;
        }
    }

    for (int i = sz; i <= n; i++){
        auto ans = mnLuckyFind(i);

        if (ans != 1e11){
            cout<<ans;
            break;
        }
    }   
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
