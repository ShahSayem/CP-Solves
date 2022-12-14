#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

sayem:
    while (t--){
        int i;
        string s;
        cin>>s;

        int l = s.size();

        if (int (s[l-1]-'0')%2 == 0 ){
            cout<<0<<endl;
            goto sayem;
        }

        if (int (s[0]-'0')%2 == 0 ){
            cout<<1<<endl;
            goto sayem;
        }

        for(i = 1; i<l-1; i++){
            if (int (s[i]-'0')%2 == 0 ){
                cout<<2<<endl;
                goto sayem;
            }
        }
        cout<<-1<<endl;
    }
    return 0;
}