#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        double q, p;
        cin>>q>>p;

        if (q > 1000){
            printf("%lf\n", p*q*0.9);
        } 
        else {
            printf("%lf\n", p*q);
        }  
      
    }
    
    return 0;
}