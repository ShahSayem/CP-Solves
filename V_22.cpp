#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        int temp = 0, count = 0;
        if ( n >= 100){
            temp = n/100;
            n %=  100;
            count += temp;
        }
        if ( n >= 50){
            temp = n/50;
            n %=  50;
            count += temp;
        }
        if ( n >= 10){
            temp = n/10;
            n %=  10;
            count += temp;
        }
        if ( n >= 5){
            temp = n/5;
            n %=  5;
            count += temp;
        }
        if ( n >= 2){
            temp = n/2;
            n %=  2;
            count += temp;
        }
        if (n==1) {
            count++;
        }
        cout<<count<<endl;
    }
    
    return 0;
}