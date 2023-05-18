#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int a, b;
    cin >>a>>b;

    int ans, subtr =  a-b;

    int last_digit = subtr%10;

    if (last_digit == 0 || last_digit == 1){
        ans = subtr+1;
    }
    else{
        ans = subtr-1;
    }

    cout<<ans<<endl;

    return 0;
}