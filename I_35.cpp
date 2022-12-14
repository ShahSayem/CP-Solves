#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long int q, p;
        cin>>q>>p; 

        int GCD = __gcd(q, p);

        cout<<GCD<<" ";
        cout<<(p*q)/GCD<<endl;
    }
    
    return 0;
}