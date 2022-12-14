#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int c0, c1;
    c0 = count(s.begin(), s.end(), '0');
    c1 = count(s.begin(), s.end(), '1');
    
    cout<<abs(c1-c0)<<endl;

    return 0;
}