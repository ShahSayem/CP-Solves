#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string s;
    getline(cin, s);
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++){
        if (i){
            if(s[i-1] == ':' && s[i] == ')'){
                a++;
            }

            if(s[i-1] == ':' && s[i] == '('){
                b++;
            }
        }
    }
    
    if (a && b){
        cout<<"double agent";
    }
    else if (a){
        cout<<"alive";
    }
    else if (b){
        cout<<"undead";
    }
    else {
        cout<<"machine";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
