#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    string s;
    cin>>s;

    int count = 0, count0 = 0, count1 = 0;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == '1'){
            count1 = 1;
            count = 0;
        } 
        else if (s[i] == '0'){
            count0 = 1;
            cout<<count0+count1+count;
            return;
        }
        else{
            count++;
            while (s[i+1] == '?' && (i+1) < s.size()){
                count++;
                i++;
            }     
        }
    }    
    cout<<count0+count1+count;
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
    