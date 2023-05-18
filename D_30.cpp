#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
            
    if(t%4 == 0){
        cout<<t+1<<endl;
    }
    else{
        cout<<t-1<<endl;
    }
    
    return 0;
}