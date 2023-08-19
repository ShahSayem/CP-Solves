#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define BASE 131 // to avoid collision we use a prime grater than current base (base is 128 as we are including lower-upper case & numbers)
#define MAX 1000005
#define MOD 1000000007
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

ll h[MAX+5], power[MAX+5];

//From Sadman Sakib Vai, DevSkill B13

void generatePrefixHash(string &s)
{
    h[0] = s[0]; // storing ascii value
    for (int i = 1; i < s.size(); i++){
        h[i] = ((h[i-1]*BASE) + s[i]) % MOD;
    }

    power[0] = 1;
    for (int i = 1; i <= s.size(); i++){
        power[i] = (power[i-1]*BASE) % MOD;
    }
}

ll generateHash(string &s)
{
    ll H = 0;
    for (auto c: s)
        H = (H*BASE + c) % MOD;

    return H;
}

ll getHash(int l, int r) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = HashOf(aabc)
{
    if (l == 0)
        return h[r];

    return (h[r]-(h[l-1] * power[r-l+1]%MOD) + MOD) % MOD;
}

int main()
{   
    Shah_Sayem

    int m, n, tc, cnt, N, ans;
    string s1, s2;

    while (cin>>N){ //N~150
        if (N == 0)
            break;

        ans = 0;
        vector <string> s(N);
        unordered_map <string, int> dominating;
        for (int i = 0; i < N; i++){
            cin>>s[i];  //each length ~70
        }
        cin>>s1;    //length ~10^6

        n = s1.size();
        generatePrefixHash(s1);

        for (int i = 0; i < N; i++){
            s2 = s[i];
            m = s2.size();
            cnt = 0;

            ll hashOfS2 = generateHash(s2);

            for (int i = 0; i <= n-m; i++){ //O(n)
                if (getHash(i, i+m-1) == hashOfS2)
                    cnt++;
            }

            ans = max(cnt, ans);
            dominating[s2] = cnt;
        }

        if (dominating.size() == 0)
            continue;

        cout<<ans<<"\n";
        for (auto it : s){
            if (dominating[it] == ans)
                cout<<it<<"\n";
        }
    }

    return 0;
} 
  
