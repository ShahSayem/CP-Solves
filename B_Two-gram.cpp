#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count, res;
    count = res = 0;
    cin>>n;
    string s;
    cin>>s;

    string ans;
    for (int i = 0; i < n-1; i++){
        count = 0;
        for (int  j = 0; j < n-1; j++){
            if (s[i] == s[j] && s[i+1] == s[j+1]){
                count++;
                if(res<count){
                    res = count;
                    ans = string (1, s[i])+ string (1, s[i+1]);
                }
            }
        }  
    }

    cout<<ans<<endl;
    
    return 0;
}