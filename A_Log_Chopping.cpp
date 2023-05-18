#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n; 

    vector <long long> vec;
    for (int i = 0; i < n; i++){
        long long j;
        cin>>j;
        vec.push_back(j);
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    int i;
    for (i = 0; i < n; i++){
        if (vec[i] == 1){
            if (i%2 == 0){
                cout<<"maomao90";
                return;
            }
            else{
                cout<<"errorgorn";
                return;
            }
        }
    } 
    if (i%2 == 0){
        cout<<"maomao90";
        return;
    }
    else{
        cout<<"errorgorn";
        return;
    }

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
    