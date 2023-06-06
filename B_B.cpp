#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, digit;
    cin>>n;

    string s;
    while (n){
        s = to_string(n);
        sort(s.begin(), s.end());

        digit = s[s.size()-1] - '0';
        n -= digit;
        cnt++;
    }
    
    cout<<cnt;

    return 0;
}
