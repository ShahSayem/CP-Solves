#include <bits/stdc++.h>
#define   ll   long long
using namespace std;

int main()
{
    int n, m, x;
    cin>>n>>m;

    vector < pair <string, string> > v;

    x = m;
    while (x--){
        string a, b;
        cin>>a>>b;
        v.push_back(make_pair(a, b));    
    }

    vector <string> v2;
    while (n--){
        string s;
        cin>>s;
        v2.push_back(s);

        for (int i = 0; i < m; i++){
            string x = v[i].first, y = v[i].second;
            if (s == v[i].first || s == v[i].second){
                if (y.size() < x.size()){
                    cout<<v[i].second<<" ";
                    break;                 
                }
                else{
                    cout<<v[i].first<<" ";
                    break;
                }
            }
        }  
    }
    
    
    return 0;
}
    