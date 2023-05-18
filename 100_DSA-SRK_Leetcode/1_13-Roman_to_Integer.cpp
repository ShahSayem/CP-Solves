#include <bits/stdc++.h>
using namespace std;

long long solve(string s){

    map <char, int> mp;
    mp['I'] = 1, mp['V'] = 5, mp['X'] = 10, mp['L'] = 50, mp['C'] = 100, mp['D'] = 500, mp['M'] = 1000;

    long long ans = 0;
    for (int i = 0; i < s.size(); i++){
        if (mp[s[i]] < mp[s[i+1]]){ // for last index it is comparing with 0
            ans -= mp[s[i]];
        }
        else{
            ans += mp[s[i]];
        }
    }
    
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<solve(s);
    
    return 0;
}