#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, a, b, c;
    cin>>n;

    if (n%3 == 0){
        a = n/3, b = (n/3)+1, c = (n/3)-1;   
    }
    else{
        a = (n/3)+1, b = (n/3)+2, c = (n/3)-2;

        if (c == 0 && (a+b+c == n))
            a--, c++;
        else if (a+b+c != n)
            c++;
    }

    cout<<a<<" "<<b<<" "<<c;
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