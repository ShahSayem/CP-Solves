#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000000;


int main()
{
    Shah_Sayem

    int l = 1, h = MAX, ans = 0, mid;

    string s;
    while (l <= h){
        mid = (l+h)/2;
        cout<<mid<<endl;

        cin>>s;

        if (s == "<"){
            h = mid-1;
        }
        else {
            //>=
            ans = max(mid, ans);
            l = mid+1;
        }
    }
    
    cout<<"! "<<ans<<endl;

    return 0;
}
