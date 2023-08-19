#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

int n, k, cnt;

void permutation(int l, string str)
{
    if (cnt == k)
        return;

    if (l == n-1){
        // cout<<"Final: ";
        cout<<str<<"\n";
        cnt++;
        return;
    }

    for (int i = l; i < n; i++){
        swap(str[l], str[i]);
        // cout<<"swap: "<<i<<" "<<l<<": "<<str<<" ";
        permutation(l+1, str);
    }
}

void solve()
{
    cnt = 0;
    string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cin>>n>>k;

    string str = s.substr(0, n);
    permutation(0, str);
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }

    return 0;
}
