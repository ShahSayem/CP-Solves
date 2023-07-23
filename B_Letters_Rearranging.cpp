#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int BASE = 131; // to avoid collision we use a prime grater than current base (base is 128 as we are including lower-upper case & numbers)
const int MAX = 1000005;
const int MOD = 1000000007;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

//From Sadman Sakib Vai, DevSkill B13

struct two
{
    int f, s;
};

vector <ll> sh, rsh, power;

vector <ll> generateExponents(int n)
{
    vector <ll> power(n+1, 1);
    for (int i = 1; i <= n; i++){
        power[i] = (power[i-1]*BASE) % MOD;
    }

    return power;
}

vector <ll> generatePrefixHash(string &s)
{
    vector <ll> h(s.size(), 0);
    h[0] = s[0]; // storing ascii value
    for (int i = 1; i < s.size(); i++){
        h[i] = ((h[i-1]*BASE) + s[i]) % MOD;
    }

    return h;
}

ll generateHash(string &s)
{
    ll H = 0;
    for (auto c: s)
        H = (H*BASE + c) % MOD;

    return H;
}

ll getHash(int l, int r, vector <ll> &h) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = HashOf(aabc)
{
    if (l == 0)
        return h[r];

    return (h[r]-(h[l-1] * power[r-l+1]%MOD) + MOD) % MOD;
}

int main()
{   
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){    
        string s, rs;
        cin>>s;
        rs = s;
        reverse(rs.begin(), rs.end());

        int n;
        n = s.size();

        sh = generatePrefixHash(s);
        rsh = generatePrefixHash(rs);
        power = generateExponents(n);

        int cnt = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == s[0])
                cnt++;
        }

        string ans;
        if (cnt == n)
            ans = "-1";
        else if (getHash(0, n-1, sh) == getHash(0, n-1, rsh)){
            for (int i = 0; i < n; i++){
                if (s[i] != s[0]){
                    swap(s[0], s[i]);
                    ans = s;
                    break;
                }      
            }
        }
        else 
            ans = s;

        cout<<ans<<"\n";
    }
    return 0;
} 
//?????????????????