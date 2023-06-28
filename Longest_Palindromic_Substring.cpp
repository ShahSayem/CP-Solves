#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int BASE = 131; // to avoid collision we use a prime grater than current base (base is 128 as we are including lower-upper case & numbers)
const int MAX = 1000005;
const int MOD = 1000000007;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

//From Sadman Sakib Vai, DevSkill B13

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

ll getHash(int l, int r, vector <ll> &h, vector <ll> &power) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = HashOf(aabc)
{
    if (l == 0)
        return h[r];

    return (h[r]-(h[l-1] * power[r-l+1]%MOD) + MOD) % MOD;
}

bool existsPalindrome(int len, vector <ll> &sh, vector <ll> &rsh, vector <ll> &power){
    int l1, l2, r1, r2, n = sh.size();
    for (int i = 0; i+len <= n; i++){
        l1 = i;
        r1 = i+len-1;
        r2 = n-1-l1;
        l2 = r2-r1+l1;

        if (getHash(l1, r1, sh, power) == getHash(l2, r2, rsh, power))
            return true;
    }
    
    return false;
}

int main()
{   
    // Shah_Sayem

    int tc;
    cin>>tc;
    while (tc--){    
        int n, cnt, ans;
        string s, rs;

        cin>>s;    //length ~10^6
        rs = s;
        reverse(rs.begin(), rs.end());
        n = s.size();

        auto sh = generatePrefixHash(s);
        auto rsh = generatePrefixHash(rs);
        auto power = generateExponents(n);

        int low = 1, high = n, mid;
        for (int i = 0; i <= n; i+=2){
            cout<<existsPalindrome(i, sh, rsh, power)<<"\n";
        }
        
        //for ODD and again for EVEN
        //mid = odd         mid = even
        //last occurance
        while (low < high){
            mid = (low+high) / 2;

            if (existsPalindrome(mid, sh, rsh, power)){

            }
            else {

            }
        }
        
    }

    return 0;
} 
  
