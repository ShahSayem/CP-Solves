#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s; 

    if (s.size() == 1){
        cout<<"NO";
        return;
    }
    else if (s[0] == 'B'){
        cout<<"NO";
        return;
    }
    else if (s[s.size()-1] != 'B'){
        cout<<"NO";
        return;
    }
    else{
        for (int i = 0; i < s.size()-1; i++){
            if (s[i] == 'B' && s[i+1] == 'B'){
                cout<<"NO";
                return;
            }           
        }
    }
    cout<<"YES";
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        solve();
        cout<<endl;     
    }
    
    return 0;
}
    