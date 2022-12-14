#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    string s;
    int member = 0, len = 0, cost = 0;
    while (getline(cin, s)){
        if (s[0] == '+'){
            member++;
        }
        else if (s[0] == '-'){ 
            member--;         
        }
        else {
            len = s.size();
            for (int i = 0; i < s.size(); i++){
                if (s[i] != ':'){
                    len--;
                }
                else {
                    len--;
                    break;
                }
            }
            
            cost += member*len;
        }
    }
    
    cout<<cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
