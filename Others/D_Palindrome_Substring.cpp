#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 1000005;
const int BASE1 = 137, BASE2 = 277; // to avoid collision we use a prime grater than current base (base is 128 as we are including lower-upper case & numbers)
const int MOD1 = 127657753, MOD2 = 987654319;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

//From Sadman Sakib Vai, DevSkill B13
//and YouKnowWho
// collusion rate = 1 / MOD; if i use double hashing collusion rate will be 1 / (MOD1 * MOD2) for each hash call;
// const __int128 MOD = 202206214218227; // More efficient module for the __int128 data type

vector < pair<ll, ll> > sh, rsh, power;

vector < pair<ll, ll> > generateExponents(int n)
{
    vector < pair<ll, ll> > power(n+1);
    //For first hash
    power[0].first = 1;
    for (int i = 1; i <= n; i++){
        power[i].first = (power[i-1].first*BASE1) % MOD1;
    }

    //For second hash
    power[0].second = 1;
    for (int i = 1; i <= n; i++){
        power[i].second = (power[i-1].second*BASE2) % MOD2;
    }

    return power;
}

vector < pair<ll, ll> > generatePrefixHash(string &s)
{
    vector < pair<ll, ll> > h(s.size());
    //For first hash
    h[0].first = s[0]; // storing ascii value
    for (int i = 1; i < s.size(); i++){
        h[i].first = ((h[i-1].first*BASE1) + s[i]) % MOD1;
    }

    //For second hash
    h[0].second = s[0]; // storing ascii value
    for (int i = 1; i < s.size(); i++){
        h[i].second = ((h[i-1].second*BASE2) + s[i]) % MOD2;
    }

    return h;
}

pair<ll, ll> generateHash(string &s)
{
    pair<ll, ll> H = {0, 0};
    for (auto c: s)
        H.first = (H.first*BASE1 + c) % MOD1;

    for (auto c: s)
        H.second = (H.second*BASE2 + c) % MOD2;

    return H;
}

pair<ll, ll> getHash(int l, int r, vector < pair<ll, ll> > &h) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = HashOf(aabc)
{
    if (l == 0)
        return h[r];

    ll f = (h[r].first-(h[l-1].first * power[r-l+1].first%MOD1) + MOD1) % MOD1;
    ll s = (h[r].second-(h[l-1].second * power[r-l+1].second%MOD2) + MOD2) % MOD2;

    return {f, s};
}


int main()
{   
    Shah_Sayem

    string s, rs;
    int n;
    while (cin>>s){
        rs = s;
        reverse(rs.begin(), rs.end());
        n = s.size();

        sh = generatePrefixHash(s);
        rsh = generatePrefixHash(rs);
        power = generateExponents(n);

        set <string> st;
        int l1, r1, l2, r2;
        for (int len = 2; len <= n; len++){
            for (int i = 0; i <= n-len; i++){
                l1 = i;
                r1 = l1+len-1;
                r2 = n-l1-1;
                l2 = r2-r1+l1;
                if (getHash(l1, r1, sh) == getHash(l2, r2, rsh))
                    st.insert(s.substr(l1, len));
            }
        }

        for (auto &it : st){
            cout<<it<<"\n";
        }
        cout<<"\n"; 
    }
    
    return 0;
} 
  