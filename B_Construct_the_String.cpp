#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        char x = 'a';
        string s;
        for (int i = 0; i < b; i++){
            if(x <= 'z'){
                s += x; 
                x++;
            }
            else{
                x = 'a';
                s += x;
                x++;
            }
        }

        for (int i = b, j = 0; i < a; i++, j++){
            s += s[j];
        }
        for (int i = a, j = 0; i < n; i++, j++){
            s += s[j];
        }

        cout<<s<<endl;
    }

    return 0;
}