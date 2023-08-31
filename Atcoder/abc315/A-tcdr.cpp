#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);


void solve()
{
	string s;
    cin>>s;

    for (int i = 0; i < s.size(); ++i){
        if ((s[i] != 'a' && s[i] != 'e') && (s[i] != 'i' && s[i] != 'o') && (s[i] != 'u'))
                cout<<s[i];
    }

}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}