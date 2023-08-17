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
    int n = s.size(), cnt = 0;

    string str1 = "", str2 = "", temp;
    for (int i = 0; i < n/2; i++){
        str1 += s[i];
        str2 += s[n-i-1];
        temp = str2;
        reverse(temp.begin(), temp.end());

        // cout<<str1<<" "<<temp<<"\n";
        if (str1 == temp){
            cnt+=2;

            str1 = "", str2 = "";
        }
    }

    if (str1 != str2)
        cnt++;

    cout<<cnt; 
}

int main()
{
    Shah_Sayem

    int tc = 1;
    // cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
