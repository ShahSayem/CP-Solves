#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

void solve(){
    vector <string> v1;
    vector <string> v2;

    ll n1, n2, n3;
    cin>>n1;
    n2 = n3 = n1;

    while (n1--){
        string j;
        cin>>j;
        v1.push_back(j);
    }

    while (n2--){
        string j;
        cin>>j;
        v2.push_back(j);
    }
    
    for (ll i = n3-1; i > -1; i--){
        string x = v1[i], y = v2[i];
        if (i == n3-1 && (x[x.size()-1] != '3' || x[x.size()-1] != '4')){
            cout<<"NO";
            return;
        }

        if ((x[x.size()-1] == '3' || x[x.size()-1] == '4')){
            if ((x[x.size()-1] == '1' || x[x.size()-1] == '2')){
                continue;
            }
        }

        if ((x[x.size()-1] == '1' || x[x.size()-1] == '2')){
            if ((x[x.size()-1] == '3' || x[x.size()-1] == '4')){
                continue;
            }
        }  

        cout<<"NO";
        break;      

    }
        cout<<"YES";
    
}
int main()
{
    int t;
    while(t--){
        solve();
    }
    
    return 0;
}