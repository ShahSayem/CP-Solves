#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        int e, f, c;
        cin>>e>>f>>c;

        int x = e+f;
        int count = 0, m = 1;
        while(m != 0){
            m = x/c;
            count += m;
            x = m + (x%c);
        }
    cout<<count<<endl;
    }
     
    return 0;
}