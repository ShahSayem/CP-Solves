#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        string s, s1, s2;
        cin>>s;
        int l = s.size();

        for (int i = 0; i< (l/2); i++){
            s1 += s[i]; 
            s2 += s[l-i-1];      
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1 == s2){
                cout<<"YES"<<endl;
            }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}