#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string s;
    cin>>s;

    ll score = 0, wicket = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'W')
            wicket++;
        else 
            score += (s[i]-'0');
    }
    
    ll n = s.size();
    cout<<n/6<<"."<<n%6;

    if ((double(n)/6 > 1)) 
        cout<<" Overs ";
    else 
        cout<<" Over ";

    cout<<score;
    if (score > 1) 
        cout<<" Runs ";
    else 
        cout<<" Run ";

    cout<<wicket;
    if (wicket > 1) 
        cout<<" Wickets.";
    else 
        cout<<" Wicket.";
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        //cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
