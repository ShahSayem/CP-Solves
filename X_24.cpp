#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n, r, rev = 0;
        cin>>n;
        long long  k = n;

        while (n > 0){
        r = n%10;
        rev = rev*10 + r;
        n /= 10;
        }
        // cout<<rev<<endl;
        if (k == rev){
            cout<<"wins"<<endl;
        }
        else {
            cout<<"loses"<<endl;
        }
    }
    return 0;
}