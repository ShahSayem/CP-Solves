#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        int a[n];
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }

        int* ma = max_element(a, a+n);
        int* mi = min_element(a, a+n);
        
        int ans = *ma-*mi;

        cout<<ans<<endl;
    }
    

    return 0;
}