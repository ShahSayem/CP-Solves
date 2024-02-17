#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

vector <int> v(10000+5);
int n, k;

int diffnum(int i, int j, int cnt)
{
    if (cnt > k)
        return k+1;

    if (i >= j)
        return cnt;
    
    if (v[i] == v[j])
        return diffnum(i+1, j-1, cnt);
    else {
        int x = diffnum(i+1, j, cnt+1);
        int y = diffnum(i, j-1, cnt+1);
        return min(x, y);
    }
}

void solve()
{
    cin>>n>>k;
    
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    int ans = diffnum(0, n-1, 0);

    if (ans > k)
        cout<<"Too difficult";
    else if (ans == 0)
        cout<<"Too easy";
    else 
        cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
