#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 0; ; i++){
        n ++;
        int ans = n;

        int a = n/1000;

        int b = (n/100)%10;

        int c = (n/10)%10;

        int d = n%10;
        
        if( a != b && a != c && a != d && b != c && b != d && d != c ){
            cout<<ans<<endl;
            break;
        }

    }
    return 0;
}