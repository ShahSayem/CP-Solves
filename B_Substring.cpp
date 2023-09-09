#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    Shah_Sayem

	int n, m, cnt, mx = 0;
    string s, t, x;
	cin>>s>>t;
	
    n = s.size();
    m = t.size();

    for (int i = 0; i <= n-m; ++i){
        cnt = 0;
        x = s.substr(i, m);
        for (int j = 0; j < m; ++j){
            if (t[j] == x[j]){
                cnt++;
            }
        }

        mx = max(cnt, mx);
    }

    cout<<m-mx;
 
    return 0;
}