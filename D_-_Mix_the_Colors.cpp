#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, count;
    count = 0;
    cin>>n; 

    vector <long long> vec;
    for (int i = 0; i < n; i++){
        int j;
        cin>>j;
        vec.push_back(j);
    }

    sort(vec.begin(), vec.end());
    for (int i = 0; i < n-1; i++){
        if (vec[i] == vec[i+1]){
            count++;
        }
    }
    cout<<count;  
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
    