#include <bits/stdc++.h>
#define   ll   long long
using namespace std;


void solve()
{
    string s;
    cin>>s;

    ll c1, c2;
    c1 = c2 = 0;

    // sort(s.begin(), s.end());
    // reverse(s.begin(), s.end());

    if (s.size() == 1){
        cout<<"Bob "<<s[0]-'a'+1;
        return;
    }
    else if (s[0]>s[s.size()-1]){
        if (s.size()%2 == 0){
            for (int i = 0; i < s.size(); i++){
                c1 += (s[i]-'a'+1);
            } 
            cout<<"Alice "<<c1;
            return;
        }
        else {
            for (int i = 0; i < s.size()-1; i++){
                c1 += (s[i]-'a'+1);
            } 
            cout<<"Alice "<<c1-(s[s.size()-1]-'a'+1);
            return;
        }
    }
    else {
        if (s.size()%2 == 0){
            for (int i = 0; i < s.size(); i++){
                c1 += (s[i]-'a'+1);
            } 
            cout<<"Alice "<<c1;
            return;
        }
        else {
            for (int i = 1; i < s.size(); i++){
                c1 += (s[i]-'a'+1);
            } 
            cout<<"Alice "<<c1-(s[0]-'a'+1);
            return;
        }
    }   
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
    