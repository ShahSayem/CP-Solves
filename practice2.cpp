#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;cin>>s;
    ll ans=0, n = s.size(), x = 1;
    x = x<<(n-1);
    
    for(int i = 0; i < x; i++){
        int pos=0, curr = i, all=0;
        for(int j=0;j<n;j++){
                all=0;
            if(curr & (1<<j)){
                ans+=stoll(s.substr(pos,j-pos+1));
                pos=j+1;
                all=1;
            }
        }
        if(!all)ans+=stoll(s.substr(pos));
    }
    cout<<ans<<"\n";
    return 0;
}