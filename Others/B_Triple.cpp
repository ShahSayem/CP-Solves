#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }

        int c=0,m=0;
        sort(ar,ar+n);
        for(int i=0; i<n-1; i++){
            if(ar[i]==ar[i+1]){
                c++;
                if(c>=2){
                    m=ar[i];
                    break;
                }
            }
            else{
                c=0;
            }
        }

        if(c>=2){
            cout<<m<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
