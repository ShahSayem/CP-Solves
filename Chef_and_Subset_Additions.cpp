#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){

        int n, x, y, i = 0, j = 0, k = 0, count = 0;
        cin>>n>>x>>y;

        int a[n], b[n];
        while(i<n){
            cin>>a[i];
            i++;
        }
        
        while(j<n){
            cin>>b[j];

            if ((a[j]+x == b[j]) || (a[j]+y == b[j])){
               count++;
            }
            j++;
        }

        if (count == n){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}