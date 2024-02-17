#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n){
        int a[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int inv[n];
        for (int i = 0; i < n; i++)
        {
            inv[a[i]-1] = i+1;
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != inv[i]){
                count++;
                break;
            }
        }
        if(count == 0){
            cout<<"ambiguous"<<endl;
        }
        else{
            cout<<"not ambiguous"<<endl;
        }
        cin>>n;
        
    }
    
    return 0;
}