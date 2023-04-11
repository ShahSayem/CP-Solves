#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()  //String to minimum number make
{
    string s;
    cin>>s;

    int n = s.size();
    map <char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    if ((mp['o'] && mp['n']) && mp['e']){
        cout<<1;

        mp['o']--, mp['n']--, mp['e']--;
    }
    else if ((mp['t'] && mp['w']) && mp['o']){
        cout<<2;

        mp['t']--, mp['w']--, mp['o']--;
    }

    else if ((mp['t'] && mp['h']) && (mp['r'] && mp['e'] == 2)){
        cout<<3;

        mp['t']--, mp['h']--, mp['r']--, mp['e']-=2;
    }

    else if ((mp['f'] && mp['o']) && (mp['u'] && mp['r'])){
        cout<<4;

        mp['f']--, mp['o']--, mp['u']--, mp['r']--;
    }

    else if ((mp['f'] && mp['i']) && (mp['v'] && mp['e'])){
        cout<<5;

        mp['f']--, mp['i']--, mp['v']--, mp['e']--;
    }

    else if ((mp['s'] && mp['i']) && mp['x']){
        cout<<6;

        mp['s']--, mp['i']--, mp['x']--;
    }

    else if ((mp['s'] && mp['e'] == 2) && (mp['v'] && mp['n'])){
        cout<<7;

        mp['s']--, mp['e']-=2, mp['v']--, mp['n']--;
    }

    else if (((mp['e'] && mp['i']) && (mp['g'] && mp['h'])) && mp['t']){
        cout<<8;

        mp['e']--, mp['i']--, mp['g']--, mp['h']--, mp['t'];
    }

    else if ((mp['n'] == 2 && mp['i']) && mp['e']){
        cout<<9;

        mp['n']-=2, mp['i']--, mp['e']--;
    }

    else if ((mp['z'] && mp['e']) && (mp['r'] && mp['o'])){
        cout<<0;

        mp['z']--, mp['e']--, mp['r']--, mp['o']--;

        return;
    }
    

    //_______------------+++++++=======
    while ((mp['z'] && mp['e']) && (mp['r'] && mp['o'])){
        cout<<0;

        mp['z']--, mp['e']--, mp['r']--, mp['o']--;
    }

    while ((mp['o'] && mp['n']) && mp['e']){
        cout<<1;

        mp['o']--, mp['n']--, mp['e']--;
    }

    while ((mp['t'] && mp['w']) && mp['o']){
        cout<<2;

        mp['t']--, mp['w']--, mp['o']--;
    }

    while ((mp['t'] && mp['h']) && (mp['r'] && mp['e'] == 2)){
        cout<<3;

        mp['t']--, mp['h']--, mp['r']--, mp['e']-=2;
    }

    while ((mp['f'] && mp['o']) && (mp['u'] && mp['r'])){
        cout<<4;

        mp['f']--, mp['o']--, mp['u']--, mp['r']--;
    }

    while ((mp['f'] && mp['i']) && (mp['v'] && mp['e'])){
        cout<<5;

        mp['f']--, mp['i']--, mp['v']--, mp['e']--;
    }

    while ((mp['s'] && mp['i']) && mp['x']){
        cout<<6;

        mp['s']--, mp['i']--, mp['x']--;
    }

    while ((mp['s'] && mp['e'] == 2) && (mp['v'] && mp['n'])){
        cout<<7;

        mp['s']--, mp['e']-=2, mp['v']--, mp['n']--;
    }

    while (((mp['e'] && mp['i']) && (mp['g'] && mp['h'])) && mp['t']){
        cout<<8;

        mp['e']--, mp['i']--, mp['g']--, mp['h']--, mp['t'];
    }

    while ((mp['n'] == 2 && mp['i']) && mp['e']){
        cout<<9;

        mp['n']-=2, mp['i']--, mp['e']--;
    }
}

int main()
{
    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
