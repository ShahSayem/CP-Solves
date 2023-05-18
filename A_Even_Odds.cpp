#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    long long n, k;
    cin >>n>>k;

    long long ans, p;

    if (n%2 == 0){
        p = n/2;
    }
    else{
        p = (n+1)/2;
    }

    if (k <= p){
        ans = (k*2)-1;
    }
    else{
        ans = (k - p)*2;
    }

    cout<<ans<<endl;

    return 0;
}