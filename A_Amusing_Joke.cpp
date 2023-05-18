#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    string s1, s2, s3;
    cin>>s1>>s2>>s3;

    s1 += s2; 

    map <char, ll> mp1, mp2;
    for (int i = 0; i < s1.size(); i++){
        mp1[s1[i]]++;
    }
    
    for (int i = 0; i < s3.size(); i++){
        mp2[s3[i]]++;
    }

    if (mp1.size() != mp2.size()){
        cout<<"NO";
        return;
    }

    for (int i = 0; i < mp1.size(); i++){
        if (mp1[s1[i]] != mp2[s1[i]]){
            cout<<"NO";
            return;
        }
    }

    cout<<"YES";
}
int main()
{
    // int t;
    // cin>>t;
    // while(t--){
        solve();
        cout<<endl;
    // }
    
    return 0;
}