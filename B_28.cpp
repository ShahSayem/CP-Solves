#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int l = s.size(), ca = 0, cb = 0;
        for( int i = 0; i<l; i++){
            if(s[i] == 'a'){
                ca++;
            }
            else{
                cb++;
            }
        }
        cout<<min(ca, cb)<<endl;
      
    }
    
    return 0;
}