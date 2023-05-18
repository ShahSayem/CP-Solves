#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, count = 0, f, e;
    cin>>n; 

    long long temp = n;

    while (temp/10 != 0){
        if(count == 0){
            e = temp%10;
            temp /= 10;
            count++;
        }
        else{
            f = temp%10;
            temp /= 10;
        }
    }
    cout<<"Sum = "<<temp+e;
    
    
}
int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    