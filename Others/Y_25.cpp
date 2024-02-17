#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int count = 0;
        if (n == 2){
            cout<<"yes"<<endl;
        }
        else if (n == 1){
            cout<<"no"<<endl;
        }
        else{
        for (int i = 2; i <= sqrt(n); i++){
            if (n%i == 0){
                cout<<"no"<<endl;
                count++;
                break;
            }
        }
        if (count == 0){
            cout<<"yes"<<endl;

            }
        }
    }
    
    return 0;
}