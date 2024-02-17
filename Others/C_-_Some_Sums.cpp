#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

void solve()
{
    int n, a, b, rem, sum, ans, temp;
    ans = 0;
    cin>>n>>a>>b;

    for (int i = 1; i <= n; i++){
        temp = i;
        sum = 0;
        while (temp != 0){
            rem = temp%10;
            sum += rem;
            temp /= 10;
        }
        if (sum >= a && sum <= b){
            ans += i;
        }   
    }
    cout<<ans;
    
}
int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<endl;     
    
    return 0;
}
    