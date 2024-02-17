#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    int cnt = 0, cnt2 = INT_MAX, cnt3 = INT_MAX;

    if (n%2 == 0){
        cnt2 = n/2;
    }

    if (n > 1){
        cnt3 = (n-4)/3 + 2;
    }
    
    cnt = n/3;
    n = n%3;

    if (n%2 == 0)
        cnt += n/2;
    else if (n == 1)
        cnt += 2;
    
    cout<<min({cnt, cnt2, cnt3});
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
} 
       
