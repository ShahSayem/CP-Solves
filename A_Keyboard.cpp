#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin>>c;

    int a;
    string syst = "qwertyuiopasdfghjkl;zxcvbnm,./";
    if (c == 'L'){
        a = 1;
    }
    else {
        a = -1;
    }
    string s, ans;
    cin>>s;

    int i, j;
    for ( i = 0, j = 0; j < s.size(); i++){
        if(s[j] == syst[i]){
            ans += syst[i+a];
            j++;
            i = -1;
        }
    }
    
    cout<<ans<<endl;

    return 0;
}