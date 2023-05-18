#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n; 

    int count = 0;
    vector <long long> vec;
    for (int i = 0; i < n; i++){
        long long j;
        cin>>j;
        vec.push_back(j);
    }

    int i;
    for (i = 0; i < n; i++){
        if (i > 0){
            if (vec[i] < vec[i-1]){
                swap(vec[i], vec[i-1]);
                break;
            }
        }
    }

    for (i = 0; i < n; i++){
        if (i > 0){
            if (vec[i] < vec[i-1]){
                count++;
            }
        }
    }
    
    i -= 1;
    //if (vec[i-2] <= vec[i-1] && vec[i-1] <= vec[i]
    
    if (count){
        cout<<"NO";
    }
    else{
        cout<<"YES";
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
    