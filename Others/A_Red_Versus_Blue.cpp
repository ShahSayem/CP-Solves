#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n, r, b;
        cin>>n>>r>>b;

        int x = (r-2)/b;

        string s;
        for (int i = 0; i < n; i++){    
            s += 'R';
        }

        while (b--){
            for (int i = x; i < n; i = i+x){    
                s[i] = 'B';
            }
        }
              
    cout<<s<<endl;

    }

    return 0;
}
    