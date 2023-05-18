#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    int x = 1;
    
    while(t--){
        long long n, k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        int count = 0;
        for (int i = 0; i < n/2 ; i++){
            if(s[i] != s[n-i-1]){
                count++;
            }
        }

        cout<<"Case #"<<x<<": "<<abs(k-count)<<endl;
        x++;
    }
    return 0;
}