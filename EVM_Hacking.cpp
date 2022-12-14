#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    long long int t;
    cin >> t;
    while(t--) {
        int a, b, c, p, q, r;
        cin>>a>>b>>c>>p>>q>>r;

        int half = (p+q+r)/2; 

        if ((a+b+r) > half || (a+c+q) > half || (b+c+p) > half){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}