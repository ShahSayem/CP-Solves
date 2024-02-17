#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, last0, first1;
    cin>>n;

    string s;
    cin>>s;

    bool start = 0, end = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '1' && !start){
            first1 = i;
            start = 1;
        }

        if (s[i] == '0'){
            last0 = i;
            end = 1;
        }
    }
    
    for (int i = 0; i < n; i++){
        if ((i >= first1 && i < last0) && (start && end)){
            continue;;
        }

        cout<<s[i];
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
