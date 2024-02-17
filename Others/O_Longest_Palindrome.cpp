#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int BASE = 131; // to avoid collision we use a prime grater than current base (base is 128 as we are including ler-upper case & numbers)
const int MAX = 1000005;
const int MOD = 1000000007;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

//From Sadman Sakib Vai, DevSkill B13
vector <int> sh, rsh, power;

void generateExponents(int n)
{
    power.resize(n+1);
    power[0] = 1;
    for (int i = 1; i <= n; i++){
        power[i] = (1LL*power[i-1]*BASE) % MOD;
    }
}

void generatePrefixHash(string &s, string &rs)
{
    int n = s.size();
    sh.resize(n), rsh.resize(n);
    sh[0] = s[0];
    rsh[0] = rs[0]; // storing ascii value
    for (int i = 1; i < n; i++){
        sh[i] = ((1LL*sh[i-1]*BASE) + s[i]) % MOD;
        rsh[i] = ((1LL*rsh[i-1]*BASE) + rs[i]) % MOD;
    }
}

int getHash(int l, int r, vector <int> &h) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = HashOf(aabc)
{
    if (l == 0)
        return h[r];

    return (h[r]-(1LL*h[l-1]*power[r-l+1]%MOD) + MOD) % MOD;
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

void ansPalindrome(int len, string &s){
    int l1, l2, r1, r2, n = sh.size();
    for (int i = 0; i+len <= n; i++){
        l1 = i;
        r1 = i+len-1;
        r2 = n-1-l1;
        l2 = r2-r1+l1;

        if (getHash(l1, r1, sh) == getHash(l2, r2, rsh)){
            cout<<s.substr(l1, len);
            return;
        }
    }
}

int LPS(int n, int parity)
{
    int l = 1, r = n, mid, oldM = -1;
    while (l < r){
        mid = (l+r) / 2;

        if (mid%2 != parity)
            mid++;

        if (oldM == mid)
            mid += 2;

        if (isPalindrome(mid)){
            l = mid;
        }
        else {
            r = mid-2;
        }

        oldM = mid;
    }

    return r;
}

int main()
{   
    Shah_Sayem
   
    int n, len;
    string s, rs;

    cin>>s; 
    n = s.size();
    rs = s;
    reverse(rs.begin(), rs.end());

    generatePrefixHash(s, rs);
    generateExponents(n);

    int odd, even;
    odd = LPS(n, 1);
    even = LPS(n, 0);

    len = max(odd, even);

    ansPalindrome(len, s);
    
    return 0;
} 
  
