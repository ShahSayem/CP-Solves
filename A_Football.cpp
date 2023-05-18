#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int x = 0, y = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            x++;
            y = 0;
        }
        else{
            y++;
            x = 0;
        }

        if(x == 7 || y == 7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    
    return 0;
}