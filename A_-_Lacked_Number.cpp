#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());

    for (int i = 0; i <= s.size(); i++){
        //cout<<s[i]<<" ";
        if (s[i]-'0' != i){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}
