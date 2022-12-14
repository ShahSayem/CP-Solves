#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll n, j;
    cin>>n;

    vector <int> v1, v2;
    for (int i = 0; i < n; i++){
        cin>>j;
        v1.push_back(j);
    }

    map <int, bool> present;
    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < n; i++){
        if (v1[i] == 0)
            zero++;
        else if (v1[i] < 0){
            neg++;
            v2.push_back(v1[i]);
        }
        else {
            pos++;
            v2.push_back(v1[i]);
        }

        present[v1[i]] = true;
    }
    
    if (pos > 2 || neg > 2){
        cout<<"NO";
        return;
    }

    zero = min(zero, 5);

    while (zero--)
        v2.push_back(0);

    n = v2.size();

    if (v2.size() < 3){
        cout<<"NO";
        return;
    }
    
    bool check = true;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                if (i != j && i != k && j != k){
                    if (present[(v2[i]+v2[j]+v2[k])])
                        check = true;
                    else
                        check = false;
                }
                if (!check){
                    cout<<"NO";
                    return;
                }
            }
        }
    }

    if (check)
        cout<<"YES";
    else
        cout<<"NO";
    
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
  
