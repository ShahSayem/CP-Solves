#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    string s, t;
    cin>>s>>t;

    if (s == t){
        cout<<s;
        return;
    }
    
    int n1 = s.size(), n2 = t.size();
    int lcm = (n1*n2)/__gcd(n1, n2);
    string s1 = "", s2 = "";

    while (s1.size() != lcm){
        s1 += s;
    }
    while (s2.size() != lcm){
        s2 += t;
    }

    if (s1 == s2)
        cout<<s1;
    else 
        cout<<-1;   
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
