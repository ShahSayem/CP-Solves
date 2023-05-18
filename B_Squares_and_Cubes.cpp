#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        int count = 1;
        for (int i = 1; i*i <= n; i++){

            int x = i*i;
            int y = i*i*i;

            if(x == y){
                count++;
            }
            else{
                count += 2;
            }
            
        }
        cout<<count<<endl;
      
    }
    
    return 0;
}