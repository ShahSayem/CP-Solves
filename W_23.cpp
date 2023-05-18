#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0, y=0;

        int a[n];
        for (int i =0; i<n; i++){
            cin>>a[i];
        }
        for (int i =0; i<n; i++){
            if ((a[i]%2) == 0){
                x++;
            }
            else {
                y++;
            }
        }

    if (x>y){
            cout<<"READY FOR BATTLE"<<endl;
        }
        else{
            cout<<"NOT READY"<<endl;
        }  
    return 0;
}