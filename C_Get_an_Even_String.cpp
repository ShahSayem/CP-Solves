#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;

        int count = 0;
        bool check = false;
        for (int i = 0, j = 1; j < s.size(); ){
            if(s[i] != s[j]){
                if(s[i+1] == s[j+1]){
                    count++;
                    i = j+2;
                    j = i+1;
                }
                else{
                    count++;
                    j++;
                }
                check = true;
            }
            else{
                i = j+1;
                j = i+1;
            }

        }
        if(check)
            cout<<count+1<<endl;
        else
            cout<<count<<endl;
    }
    
    return 0;
} 