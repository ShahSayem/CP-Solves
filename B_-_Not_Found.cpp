#include <iostream>
#include <map>
#include <iterator>
#define   ll   long long
using namespace std;


void solve()
{
    string s;
    cin>>s;

    map <char, ll> freq;
    char c = 'a';
    for (int i = 0; i < 26; i++){
        freq[c] = 0;
        c++;
    }

    for (int i = 0; i < s.size(); i++){
        freq[s[i]]++;
    }
    
    for (auto it = freq.begin(); it != freq.end(); it++){
        if(it->second == 0){
            cout<<it->first;
            return;
        }
    }
    
    cout<<"None";
    
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
    