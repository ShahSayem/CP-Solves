#include <iostream>
#define   ll   long long
using namespace std;


void solve()
{
    string s;
    cin>>s;

    if (s.size()%2)
        s += '!';

    s.erase(s.size()-2);

    for (int i = s.size(); i > -1; i -= 2){
        string x, y;
        int j;
        for (j = 0; j < (s.size()/2); j++){
            x += s[j];
        }
        for (; j < s.size(); j++){
            y += s[j];
        }
        
        if (x == y){
            cout<<s.size();
            return;
        }

        else {
            s.erase(s.size()-2);
        }
    }  
}

int main()
{
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<endl;     
    // }
    
    return 0;
}
    