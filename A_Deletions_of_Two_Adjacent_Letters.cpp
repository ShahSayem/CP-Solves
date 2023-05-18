#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;

        char c;
        cin>>c;

        bool check = false;
        for (int i = 0; i < s.size(); i += 2){
            if(s[i] == c){
                cout<<"YES"<<endl;
                check = true;
                break;
            }
        }

        if(!check){
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}