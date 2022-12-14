#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d, i = 0;

    while (cin>>a>>b>>c>>d){
        i++;
        cout<<"Case "<<i<<":"<<"\n";
        
        int aa = (a*d)-(b*c);

        swap(a, d);
        b *= -1;
        c *= -1;

        cout<<a/aa<<" "<<b/aa<<"\n";
        cout<<c/aa<<" "<<d/aa<<"\n";
    }

    return 0;
} 
  
