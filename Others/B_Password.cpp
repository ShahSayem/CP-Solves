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

vector <ll> sh, power;

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

    string s;
    cin>>s;
    int n;
    n = s.size();

    sh = generatePrefixHash(s);
    power = generateExponents(n);

    vector <two> v;
    bool check = 0;
    int temp;
    for (int i = 0, j = n-1; i < n-1; i++, j--){
        if (getHash(0, i, sh) == getHash(j, n-1, sh)){
            temp = getHash(0, i, sh);
            v.push_back({temp, i+1});
        }
    }

    if (v.empty()){
        cout<<"Just a legend\n";

        return 0;
    }

    string ans;
    for (int i = v.size()-1; i >= 0 && !check; i--){
        for (int j = 1; j < n-v[i].s; j++){
            if (v[i].f == getHash(j, j+v[i].s-1, sh)){
                ans = s.substr(j, v[i].s);

                check = 1;
                break;
            }
        }
    }

    if (check)
        cout<<ans<<"\n";
    else 
        cout<<"Just a legend\n";

    return 0;
} 
  