#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int BASE = 131; // to avoid collision we use a prime grater than current base (base is 128 as we are including ler-upper case & numbers)
const int MAX = 1000005;
const int MOD = 1000000007;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

//From Sadman Sakib Vai, DevSkill B13
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
    vector <ll> h(s.size());
    h[0] = s[0]; // storing ascii value
    for (int i = 1; i < s.size(); i++){
        h[i] = ((h[i-1]*BASE) + s[i]) % MOD;
    }

    return h;
}

ll getHash(int l, int r, vector <ll> &h) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = HashOf(aabc)
{
    if (l == 0)
        return h[r];

    return (h[r]-(h[l-1] * power[r-l+1]%MOD) + MOD) % MOD;
}

bool isPalindrome(int len){
    int l1, l2, r1, r2, n = sh.size();
    for (int i = 0; i+len <= n; i++){
        l1 = i;
        r1 = i+len-1;
        r2 = n-1-l1;
        l2 = r2-r1+l1;

        if (getHash(l1, r1, sh) == getHash(l2, r2, rsh))
            return true;
    }
    
    return false;
}

int LPS(int n, int parity)
{
    int l = 1, r = n, mid;
    while (l < r){
        mid = (l+r) / 2;

        if (mid%2 != parity)
            mid++;

        if (isPalindrome(mid))
            l = mid;
        else 
            r = mid-2;
    }

    return r;
}

int main()
{   
    Shah_Sayem
   
    int n, cnt, ans;
    string s, rs;

    cin>>n;
    cin>>s;    //length ~10^6
    rs = s;
    reverse(rs.begin(), rs.end());

    sh = generatePrefixHash(s);
    rsh = generatePrefixHash(rs);
    power = generateExponents(n);

    int odd, even;
    odd = LPS(n, 1);
    even = LPS(n, 0);

    ans = max(odd, even);
    cout<<ans<<"\n";

    return 0;
} 
  
