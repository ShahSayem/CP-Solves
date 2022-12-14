#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int j = 1; j <= t; j++){
        long long n, x = 9;
        cin>>n;

        int i = 2;
        while (x <= n){
            x *= i;
            if(x < n){
                x = 9;
            }
            i++;
        }
        cout<<"Case #"<<j<<": "<<x<<endl;   
    }
    return 0;
}
