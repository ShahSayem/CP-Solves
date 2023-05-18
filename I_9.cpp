#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int x = (s[0]-'0');
        int y = (s[s.size()-1]-'0');

        int a = x + y;
        cout<<a<<endl;
    }
    
    return 0;
}