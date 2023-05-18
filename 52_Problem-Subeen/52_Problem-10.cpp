#include <bits/stdc++.h>
using namespace std;

void solve()
{
    float r1, r2, ball, crr, rrr;
    cin>>r1>>r2>>ball; 

    crr = (r2/(300-ball))*6;
    rrr = ((r1-r2+1)/ball )*6;

    printf("%0.2f ", crr); 
    printf("%0.2f ", rrr); 
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
    