#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve ()
{
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    vector <int> v1(n1), v2(n2), v3(n3);

    ll sum1 = 0, sum2 = 0, sum3 = 0, minSum;
    ll Ssum1[n1] = {0}, Ssum2[n2] = {0}, Ssum3[n3] = {0};

    for (int i = 0; i < n1; i++){
        cin>>v1[i];
        sum1 += v1[i];
    }

    for (int i = 0; i < n2; i++){
        cin>>v2[i];
        sum2 += v2[i];
    }

    for (int i = 0; i < n3; i++){
        cin>>v3[i];
        sum3 += v3[i];
    }   
    minSum = min({sum1, sum2, sum3});

    map <int , int> mp1, mp2, mp3;

    //suffix sum

    mp1[v1[0]]++;
    mp2[v2[0]]++;
    mp3[v3[0]]++;
    Ssum1[n1-1] = v1[n1-1];
    for (int i = n1-2; i > -1; i--){
        Ssum1[i] = Ssum1[i+1]+v1[i];
        mp1[v1[i]]++;
    }

    Ssum2[n2-1] = v2[n2-1];
    for (int i = n2-2; i > -1; i--){
        Ssum2[i] = Ssum2[i+1]+v2[i];
        mp2[v2[i]]++;
    }

    Ssum3[n3-1] = v3[n3-1];
    for (int i = n3-2; i > -1; i--){
        Ssum3[i] = Ssum3[i+1]+v3[i];
        mp3[v3[i]]++;
    }

    ll ans = 0, ok = 0;
    ll sz = max({n1, n2, n3});

    if (sz == n1)
        ok = 1;
    if (sz == n2)
        ok = 2;
    if (sz == n3)
        ok = 3;

    ll tot;
    for (int i = 0; i < n1; i++){
        if (ok == 1)
            tot = v1[i];
        if (ok == 2)
            tot = v2[i];
        if (ok == 3)
            tot = v3[i];

        if (mp1[tot] > 0 && mp2[tot] > 0 && mp3[tot] > 0)
            ans = tot;
    }

    cout<<ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
