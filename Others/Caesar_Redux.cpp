#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int shift;
    cin>>shift;

    //shift %= 26;
    string s, word;
    getline(cin.ignore(), s);
    //cout<<s;


    bool encrypted = 1;
    stringstream z(s);
    while (z >> word){
        if (word == "the"){
            encrypted = 0;

            // cout<<"Plain Text";
            // return;
        }

        //cout<<word<<" ";
    }
    
    //cout<<"Encrypted";

    char ch;
    int x, curr;
    if (encrypted){ //decryption
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' '){
                cout<<" ";
                continue;
            }

            x = s[i]-'a';
            curr = x-shift;

            if (curr < 0){
                curr += 26;
            }

            ch = curr+'a';
            cout<<ch;
        }  
    }
    else { //encryption 
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' '){
                cout<<" ";
                continue;
            }

            x = s[i]-'a';
            curr = x+shift;

            if (curr > 25){
                curr %= 26;
            }

            ch = curr+'a';
            cout<<ch;
        }        
    }
}

int main()
{
    //Shah_Sayem

    int tc = 1;
    cin>>tc;
    cin.ignore();
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
