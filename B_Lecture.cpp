#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    map <string, string> mp;

    while (m--){
        string a, b;
        cin>>a>>b;
        mp[a] = b;    
    }

    while (n--){
        string x, y;
        cin>>x;

        y = mp[x];
        if (x.size() > y.size())
            cout<<y<<" ";
        else
            cout<<x<<" ";

    }
    
    
    return 0;
}
    