#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a;
    cin>>t;

    while (t--){

        string s;
        cin>>s;
        
        bool check = true;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == 'a' && s[i+1] != 'a' && s[i-1] != 'a'){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
            else if(s[i] == 'b' && s[i+1] != 'b' && s[i-1] != 'b'){
                cout<<"NO"<<endl;
                check = false;
                break;
            }
        }   
        
        if (check)
            cout<<"YES"<<endl;
    }

    return 0;
}
    