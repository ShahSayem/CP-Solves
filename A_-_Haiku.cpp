#include <iostream>
#define   ll   long long
using namespace std;


void solve()
{
    string s;
    cin>>s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == ',')
            cout<<" ";
        else{
            cout<<s[i];
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
    