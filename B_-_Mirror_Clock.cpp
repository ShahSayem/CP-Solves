#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        string s;
        cin>>s;

        int t1, t2;
        if(s[0] == '1'){
            if(s[1] == '1' || s[1] == '2'){
                t1 = 23-(s[0]-'0'+(s[1]-'0')*10);
                t2 = 60-(s[3]-'0'+(s[4]-'0')*10);
            }
        }

    cout<<t1<<":"<<t2<<endl;
    }
     
    return 0;
}