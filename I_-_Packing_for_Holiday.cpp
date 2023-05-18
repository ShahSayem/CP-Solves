#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


int main()
{
    int t;
    cin>>t;
    int i = 0;
    while(t--){
        i++;
        cout<<"Case "<<i<<": ";
        bool check = true;
        vector <ll> v;
        for (int i = 0; i < 3; i++){
            ll j;
            cin>>j;
            v.push_back(j);
        }

        for (int i = 0; i < 3; i++){
            if (v[i] > 20){
                cout<<"bad";
                check = false;
                break;
            }          
        }
        

        if (check)
            cout<<"good";
  
        cout<<endl;
    }
    
    return 0;
}