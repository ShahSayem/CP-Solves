#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

ll powerSet(string &s)
{
    int n = s.size(), x = 1;
    x = x<<(n-1);

    ll sum = 0;
    int curr, pos, all;

    string temp;
    for (int i = 0; i < x; i++){
        curr = i, pos = 0;
        for (int j = 0; j < n; j++){
            all = 0;
            if (curr & (1<<j)){
                temp = s.substr(pos, j-pos+1);

                if (!temp.empty()){
                    sum += (stoll(temp));

                    //cout<<temp<<"\n";
                    pos = j+1;
                    all = 1;
                }
            }
        }
        
        if (!all){
            sum += (stoll(s.substr(pos)));
            
            //cout<<i<<" "<<s.substr(pos)<<"\n";
        }
    }
    
    return sum;
}

void solve()
{
    string s;
    cin>>s;

    cout<<powerSet(s);
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
