#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        int a[n], b[n], a1[n], b1[n];
        
        for (int i = 0; i < n; i++){
            cin>>a[i];
        }

        for (int i = 0; i < n; i++){
            cin>>b[i];

            a1[i] = max(a[i], b[i]);
            b1[i] = min(a[i], b[i]);
        }

        int* ma = max_element(a1, a1+n);
        int* mi = max_element(b1, b1+n);

        int ans = (*ma)*(*mi);
        cout<<ans<<endl;
    }
    return 0;
}