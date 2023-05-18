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
        for (int i = 0; i <= 1000; i++){
            long long remain = n-(2020*i);
            if(remain < 0){
                break;
            }
            if(remain%2021 == 0){
                cout<<"YES"<<endl;
                check = true;
                break;
            }
        }
        if(!check){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}