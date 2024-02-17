#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
bool markPOs[106];

int main()
{
    Shah_Sayem

    int x, n, pos, diff, ans;
    cin>>x>>n;
    for (int i = 0; i < n; i++){
        cin>>pos;
        markPOs[pos] = 1;
    }

    for (int i = -1; i >= -105; i--){
            diff = abs(x-i);
            ans = i;
            break;
    }

    for (int i = x-1; i >= 0; i--){
        if (!markPOs[i]){
            if (diff > abs(x-i)){
                diff = abs(x-i);
                ans = i;
                break;
            }    
        }
    }

    for (int i = x; i <= 105; i++){
        if (!markPOs[i]){
            if (diff > abs(x-i)){
                diff = abs(x-i);
                ans = i;
                break;
            } 
        }
    }

    cout<<ans;

    return 0;
}
