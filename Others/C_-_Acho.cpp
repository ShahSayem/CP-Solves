#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, x = 0;
    string s;
    cin>>t;
    while (t--){
        cin>>s;
        if (s == "++X" || s == "X++")
            x++;
        else
            x--;
    }

    cout<<x<<"\n";

    return 0;
} 
  
