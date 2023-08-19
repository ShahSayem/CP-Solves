#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;


void solve()
{
    string s;
    cin>>s;
    int n = s.size();

    vector <int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    string ans = "";
    ans += s[0];
    for (int i = 1; i < n; i++){
        if (s[i] >= s[i-1] || s[i-1] == '0'){
            ans += s[i];
        }
        else {
            char ch;
            vector <string> vec;
            string temp = ans, x = s.substr(0, ans.size()), currAns = "";
            for (int i = s[i]-'0'; i < 11; i++){
                ch = v[i];
                temp += v[i];

                vec.push_back(temp);
                temp = ans;
            }
            sort(vec.begin(), vec.end());

            int idx = lower_bound(vec.begin(), vec.end(), x)-vec.begin();
            ans = vec[i];
        }
    }
    
    cout<<ans;
}

int main()
{
    // Shah_Sayem

    // int tc = 1;
    // cin>>tc;
    // while (tc--){
    //     solve();
    //     cout<<"\n";
    // }

    char c = 4;
    cout<<c;

    return 0;
}
