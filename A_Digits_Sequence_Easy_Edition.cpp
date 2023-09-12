#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


int main()
{
    Shah_Sayem

    int k;
    cin>>k;
    
    int num = 1;
    string s = "", curr;
    for (int i = 0; i <= k+100; ){
        curr = to_string(num);
        s += curr;
        i += curr.size();
        num++;
    }
    
    cout<<s[k-1]<<"\n";

    return 0;
}
