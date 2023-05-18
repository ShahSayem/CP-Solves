#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    string s, tt;
    cin>>s;

    cin>>tt;     

    if (tt == "a"){
        cout<<1;
        return;
    }

    for (int i = 0; i < tt.size(); i++){
        if (tt[i] == 'a'){
            cout<<-1;
            return;
        }
    }  

    cout<<(ll)(pow(2, s.size()));

}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    