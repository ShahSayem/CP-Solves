#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    Shah_Sayem

    int n, x, mn = INT_MAX, pos;
    cin>>n;
    
    map <int, int> mp;
    for (int i = 1; i <= n; i++){
        cin>>x;

        mn = min(x, mn);
        if (x == mn){
            mp[x]++;
            pos = i;
        }
    }
    
    if (mp[mn] == 1)
        cout<<pos;
    else 
        cout<<"Still Rozdil";

    return 0;
}
