#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
    int n, mx = 0;
    cin>>n;

    string s;
    cin>>s;
    s += 'A';

    int start = -1, end = -1;
    for (int i = 0; i < n+1; i++){
        if (start == -1 && s[i] == 'A'){
            start = i;
        }
        else if (s[i] == 'A'){

            end = i;

            mx = max(end-start-1, mx);
            start = end;
        }
    }

    cout<<mx; 
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
