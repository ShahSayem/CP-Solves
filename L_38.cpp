#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        double b, s;
        cin>>b;

        if (b < 1500){
            s = b*2;
        } 
        else {
            s = b+500+((b*98)/100);
        }  
        printf("%0.2lf\n", s);
      
    }
    
    return 0;
}