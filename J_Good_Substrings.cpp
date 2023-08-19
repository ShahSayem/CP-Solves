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

vector < pair<int, int> > sh, power;

void generateExponents(int n)
{
    power.resize(n+1);
    power[0].first = 1;
    for (int i = 1; i <= n; i++){
        power[i].first = (1LL*power[i-1].first*BASE1) % MOD1;
    }

    power[0].second = 1;
    for (int i = 1; i <= n; i++){
        power[i].second = (1LL*power[i-1].second*BASE2) % MOD2;
    }
}

void generatePrefixHash(string &s)
{
    int n = s.size();
    sh.resize(n);
    sh[0].first = s[0]; // storing ascii value
    for (int i = 1; i < n; i++){
        sh[i].first = ((1LL*sh[i-1].first*BASE1) + s[i]) % MOD1;
    }

    sh[0].second = s[0]; // storing ascii value
    for (int i = 1; i < n; i++){
        sh[i].second = ((1LL*sh[i-1].second*BASE2) + s[i]) % MOD2;
    }
}

pair<int, int> getHash(int l, int r, vector < pair<int, int> > &h) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = HashOf(aabc)
{
    if (l == 0)
        return h[r];

    int f = (h[r].first-(1LL*h[l-1].first * power[r-l+1].first%MOD1) + MOD1) % MOD1;
    int s = (h[r].second-(1LL*h[l-1].second * power[r-l+1].second%MOD2) + MOD2) % MOD2;

    return {f, s};
}


int main()
{   
    Shah_Sayem

    string s1, s2;
    cin>>s1>>s2;
    int n, k;
    cin>>k;
    n = s1.size();

    char c;
    map <char, int> badLetter;
    for (int i = 0; i < 26; i++){
        c = i+97;
        if (s2[i] == '0'){
            badLetter[c]++;
        }
    }

    generatePrefixHash(s1);
    generateExponents(n);

    int preBad[n];
    if (badLetter[s1[0]])
        preBad[0] = 1;
    else 
        preBad[0] = 0;
    for (int i = 1; i < n; i++){
        if (badLetter[s1[i]])
            preBad[i] = preBad[i-1]+1;
        else 
            preBad[i] = preBad[i-1];
    }
    
    set < pair<int, int> > st;
    for (int len = 1; len <= n; len++){
        for (int i = 0; i <= n-len; i++){
            if (i){
                if (preBad[i+len-1]-preBad[i-1] <= k){
                    st.insert(getHash(i, i+len-1, sh));
                } 
            }
            else {
                int idx = len-1;
                if (preBad[len-1] <= k){
                    st.insert(getHash(i, i+len-1, sh));
                }
            } 
        }
    }
    
    cout<<st.size()<<"\n";
    
    return 0;
} 
  