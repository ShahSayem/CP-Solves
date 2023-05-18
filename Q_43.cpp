#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;
        int max = 0;

        for (int i = 1; i <= k; i++){
            if (n%i > max){
                max = n%i;
            }
            
        }
        cout<<max<<endl;
    }
    
    return 0;
}