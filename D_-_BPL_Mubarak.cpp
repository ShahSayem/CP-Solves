#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    string s;
    cin>>s;

    int cnt = 0, over, ball;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'W' || s[i] == 'D' || s[i] == 'N')
            continue;
        else
            cnt++;
    }

    over = cnt/6;
    ball = cnt%6;

    if (over){
        if (over == 1)
            cout<<over<<" OVER ";
        else 
           cout<<over<<" OVERS "; 
    }
        
    if (ball){
        if (ball == 1)
            cout<<ball<<" BALL";
        else 
            cout<<ball<<" BALLS";
    }   
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
  
