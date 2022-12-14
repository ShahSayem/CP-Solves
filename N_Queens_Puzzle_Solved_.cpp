#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;

        float ans = pow(n*0.143, n);
        cout<<round(ans)<<endl;
    }
    return 0;
}