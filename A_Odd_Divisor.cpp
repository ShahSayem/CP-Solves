#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        long long n;
        cin>>n;

        bool check = false;
        if(n%2 != 0){
            cout<<"YES"<<endl;
        } 
        else{
            n /= 2;
            while(n>1){
                if(n%2 != 0){
                    cout<<"YES"<<endl;
                    check = true;
                    break;
                }
                else{
                    n /= 2;
                }
            }
            if(!check){
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}