#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int x, y;
        cin>>x>>y;

        string s;
        for (int i = 0; i < x/2; i++){
            s += "a";
        }
        for (int i = 0; i < y/2; i++){
            s += "b";
        }

        string s2 = s;
        reverse(s.begin(), s.end());
        s2 += s;
            

        
    }
    
    return 0;
}
