#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--) {
        long long int a, b, c, a1 = 0, a2 = 0, a3 = 0;
        cin>>a>>b>>c;

        if (a <= max(b, c)) {
            a1 = max(b, c) +1 - a;
        }
        if (b <= max(a, c)) {
            a2 = max(a, c) +1 - b;
        }
        if (c <= max(a, b)) {
            a3 = max(a, b) +1 - c;
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
return 0;
}