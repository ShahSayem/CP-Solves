#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll sum = 0;
    string s;
    while (cin>>s){
        sum = 0;
        for (int i = 0; i < s.size(); i++){
            sum += (s[i]-'0');
        }
        cout<<sum<<"\n";
    }

    return 0;
} 
  
