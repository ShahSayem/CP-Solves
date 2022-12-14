#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
       long long a[7];

       for(int i = 0; i<7; i++) {
           cin>>a[i];
       }

        if ((a[0]+a[1]+a[2]) > a[6]){
            a[2] = a[2] + ((a[0]+a[1]+a[2]) - a[6]);

            for(int i = 0; i<3; i++) {
                cout<<a[i]<<" ";
            }
        }
        else if ((a[0]+a[1]+a[2]) < a[6]){
            a[2] = a[2] + (a[6] - (a[0]+a[1]+a[2]));

            for(int i = 0; i<3; i++) {
                cout<<a[i]<<" ";
            }
        }
        else {
            for(int i = 0; i<3; i++) {
                cout<<a[i]<<" ";
            }
        } 
    cout<<endl;
    }
    return 0;
}